# Your code here
def full_name(first_name, *middle_names, last_name)
    f_name = ''
    f_name += first_name
    middle_names.each do |name|
       f_name += " "
       f_name += name
    end
    
    f_name += " "
    f_name += last_name
    
end 
