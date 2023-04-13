import pyttsx3
import speech_recognition as sr
import datetime
import wikipedia
engine = pyttsx3.init('sapi5')
voices=engine.getProperty('voices')
#print(voices[1].id)'''0=man speak,1=women speak'''
engine.setProperty('voice',voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()
def wishMe(): 
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("Good Mornig!")
    if hour>=12 and hour<18: 
        speak("Good Afternoon!")
    else: 
        speak("Good Evening!")
    speak("I am Shashank Sir. Please tell me how may I help you")
def takeCommand():
    # It takes microphone input from the user and returns string output
    r=sr.Recognizer()
    with sr.Microphone() as source: 
        print("Listening...")
        r.pause_threshold =1 #taking time to listening 
        audio = r.listen(source)
    try : 
        print("Recognizing...")
        query = r.recognize_google(audio,Language='en-in')
        print(f"User said: {query}\n")
    except Exception as e:
        #print(e) #if we want to it will not write erron then it comments it
        print("Say that again please...")
        return "None"
    return query
if __name__ == '__main__':
    speak("Shashank is a good boy")
    wishMe()
while True:
    query=takeCommand().lower()
    #logic for executing tasks based on quary
    if 'wikipedia' in query: 
        speak('Searching wikipedia... ')
        query  = query.rplace("wikipedia")
        results = wikipedia.summary(query,sentences=2 )
        speak("According to wikipedia: ")
        print(results)
        speak(results)