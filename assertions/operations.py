class User:
   def __init__(self, user_id):
      self.user_id = user_id
      self.is_admin = False


def admin_operation(request, user):
   '''
      Only call this function on admin users
   '''
   assert user.is_admin, "user does not have access"
   # secure code...
   print("running secure code, assuming admin rights")

if __name__=='__main__':
   guest = User(123)
   admin_operation("show confidential info", guest)
