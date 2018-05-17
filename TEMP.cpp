
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
   int a[3];
   int flags1=0,flags1_1=0,flags1_2=0,flags1_3=0,flags1_4=0;
   for(int i=0;i<3;++i){
            cin>>a[i];
   }
   int max1=a[0],N;
   if(a[0]<a[1]){
              if(a[0]<a[2]){
                        if(a[2]<a[1]){
                                    max1=a[1];
                                    N=1;
                        }
                        if(a[2]==a[1]){
                                    max1=a[1];
                                    flags1=1;
                                    flags1_1=1;
                                    N=1;
                        }
                        if(a[2]>a[1]){
                                    max1=a[2];
                                    N=2;
                        }
              }
            if(a[0]>a[2]||a[0]==a[2]){
                        max1=a[1];
                        N=1;
            }
       }
     if(a[0]==a[1]){
                   if(a[1]>a[2]){
                        flags1=1;
                        flags1_2=1;
                        N=0;
                   }
                   if(a[1]==a[2]){
                        flags1=1;
                        flags1_3=1;
                        N=0;
                   }
                   if(a[1]<a[2]){
                        max1=a[2];
                        N=2;
                   }
       }
       if(a[0]>a[1]){
                    if(a[1]>a[2]||a[1]==a[2]){
                        N=0;
                    }
                    if(a[1]<a[2]){
                        if(a[0]<a[2]){
                                    max1=a[2];
                                    N=2;
                        }
                        if(a[0]==a[2]){
                                    flags1=1;
                                    flags1_4=1;
                                    N=0;
                        }
                        if(a[0]>a[2]){
                                    N=0;
                        }
                    }

       }
       if(flags1==1){
            if(flags1_1==1){
                        cout<<a[1]<<" "<<a[2]<<endl;
            }
            if(flags1_2==1){
                        cout<<a[0]<<" "<<a[1]<<endl;
            }
            if(flags1_3==1){
                        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            }
            if(flags1_4==1){
                        cout<<a[0]<<" "<<a[2]<<endl;
            }
       }
       if(flags1==0)
       {
            cout<<a[N]<<endl;
       }

  return 0;
}




   int flags1=0,flags1_1=0,flags1_2=0,flags1_3=0,flags1_4=0;
   int flags2=0,flags2_1=0,flags2_2=0,flags2_3=0,flags2_4=0;
   int max1=c[0],N;int max2=d[0],M;
   if(c[0]<c[1]){
              if(c[0]<c[2]){
                        if(c[2]<c[1]){
                                    max1=c[1];
                                    N=1;
                        }
                        if(c[2]==c[1]){
                                    max1=c[1];
                                    flags1=1;
                                    flags1_1=1;
                                    N=1;
                        }
                        if(c[2]>c[1]){
                                    max1=c[2];
                                    N=2;
                        }
              }
            if(c[0]>c[2]||c[0]==c[2]){
                        max1=c[1];
                        N=1;
            }
       }
     if(c[0]==c[1]){
                   if(c[1]>c[2]){
                        flags1=1;
                        flags1_2=1;
                        N=0;
                   }
                   if(c[1]==c[2]){
                        flags1=1;
                        flags1_3=1;
                        N=0;
                   }
                   if(c[1]<c[2]){
                        max1=c[2];
                        N=2;
                   }
       }
       if(c[0]>c[1]){
                    if(c[1]>c[2]||c[1]==c[2]){
                        N=0;
                    }
                    if(c[1]<c[2]){
                        if(c[0]<c[2]){
                                    max1=c[2];
                                    N=2;
                        }
                        if(c[0]==c[2]){
                                    flags1=1;
                                    flags1_4=1;
                                    N=0;
                        }
                        if(c[0]>c[2]){
                                    N=0;
                        }
                    }

       }
       if(d[0]<d[1]){
              if(d[0]<d[2]){
                        if(d[2]<d[1]){
                                    max2=d[1];
                                    M=1;
                        }
                        if(d[2]==d[1]){
                                    max2=d[1];
                                    flags2=1;
                                    flags2_1=1;
                                    M=1;
                        }
                        if(d[2]>d[1]){
                                    max2=d[2];
                                    M=2;
                        }
              }
            if(d[0]>d[2]||d[0]==d[2]){
                        max2=d[1];
                        M=1;
            }
       }
     if(d[0]==d[1]){
                   if(d[1]>d[2]){
                        flags2=1;
                        flags2_2=1;
                        M=0;
                   }
                   if(d[1]==d[2]){
                        flags2=1;
                        flags2_3=1;
                        M=0;
                   }
                   if(d[1]<d[2]){
                        max2=d[2];
                        M=2;
                   }
       }
       if(d[0]>d[1]){
                    if(d[1]>d[2]||d[1]==d[2]){
                        M=0;
                    }
                    if(d[1]<d[2]){
                        if(d[0]<d[2]){
                                    max2=d[2];
                                    M=2;
                        }
                        if(d[0]==d[2]){
                                    flags2=1;
                                    flags2_4=1;
                                    M=0;
                        }
                        if(d[0]>d[2]){
                                    M=0;
                        }
                    }

       }
       if(flags1==1){
            if(flags1_1==1){
                        cout<<str[1]<<" "<<str[2]<<endl;
            }
            if(flags1_2==1){
                        cout<<str[0]<<" "<<str[1]<<endl;
            }
            if(flags1_3==1){
                        cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<endl;
            }
            if(flags1_4==1){
                        cout<<str[0]<<" "<<str[2]<<endl;
            }
       }
       if(flags1==0)
       {
            cout<<str[N]<<endl;
       }
