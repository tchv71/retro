#define Y(E) (523*50+(E)/2)/(E)

#define C  (523*50+(262)/2)/(262)
#define D  (523*50+(294)/2)/(294)
#define E  (523*50+(330)/2)/(330)
#define F  (523*50+(349)/2)/(349)
#define G  (523*50+(392)/2)/(392)
#define A  (523*50+(440)/2)/(440)
#define C2 (523*50+(523)/2)/(523)

#define M(N, X) (N), (X)*8000/(N)

uint music[1] = { 
  M(F,8), M(A,4), M(C2,4), M(A,4), M(F,8), M(C,4), M(D,4), M(E,4),
  M(F,8), M(A,4), M(C2,4), M(A,4), M(G,8), M(C,4), M(D,4), M(E,4), M(E,8), M(C,4), M(D,4), M(E,4), M(F,16),
  M(F,8), M(A,4), M(C2,4), M(A,4), M(G,8), M(C,4), M(D,4), M(E,4), M(E,8), M(C,4), M(D,4), M(E,4), M(F,16),
  0
};