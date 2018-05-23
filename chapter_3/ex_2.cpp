for (int i = 0; i <= phrase.size(); ++i)
  {
    cout << "Character at position " << i << " is: " << phrase[i] << endl;
  }

// phrase.size() length is one greater than index of string
// Therefore it will try to reference an index that is out
// of bounds and bad things will happen
