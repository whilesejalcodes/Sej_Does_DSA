// a Square
// ***
// ***
// ***
for (int i=0;i<n;i++){
  for (int j=0; j<=n;j++){
    cout<<"*";
  }
  cout<<endl;
}

//Right angled triangle
for (int i=0;i<n;i++){
  for (int j=0; j<=i;j++){
    cout<<"*";
  }
  cout<<endl;
}

//1
//1 2
//1 2 3
//1 2 3 4....
for (int i=1;i<=n;i++){
  for (int j=1; j<=i;j++){
    cout<<j<<" ";
  }
  cout<<endl;
}

// 1
// 2 2
// 3 3 3 
// 4 4 4 4 ...
for (int i=1;i<=n;i++){
  for (int j=1; j<=i;j++){
    cout<<i<<" ";
  }
  cout<<endl;
}
