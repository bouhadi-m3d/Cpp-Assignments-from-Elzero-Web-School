/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid ] => Can't start with number
  __name      [ Valid ] => Bad Practice
  name@name   [ Not Valid ] => it contains special character
  name10name  [ Valid ] => Bad practice because it contains number
  name!name   [ Not Valid ] => Special character
  first_NAME  [ Valid ] => Best practice
  first_name  [ Valid ] => Best practice
  firstName   [ Valid ] => Good Practice
  first name  [ Not Valid ] => can't contain white spaces
  fn          [ Valid ] => Bad Practice
  public      [ Not Valid ] => C++ Reserved word
  Public      [ Valid ] => Bad Practice
*/
