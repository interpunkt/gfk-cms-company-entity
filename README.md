# Install 
1. Module Download with composer `composer require ip/company` 
2. Module install with drupal console `./vendor/bin/drupal module:install company`

## help
* http://localhost:8001/admin/structure/company/settings/form-display #autocomplete to checkbox
* http://localhost:8001/admin/config/people/accounts/form-display #autocomplete to dropdown

## Views
Views sind ansich ein grafischer querybuilder für select Statements auf die DB. Man kann sich 
hier sein Content den man braucht zusammen schubsen.


* List Company Users -> query auf DB, hole Users zugeordnet zu Company (filter company equal currentUser->company)
* Admin List Company -> Zeige im Admin Panel eine Liste mit allen Companies an. +edit +delete
