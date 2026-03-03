const axios = require('axios');

// Виконуємо GET-запит
axios.get('https://jsonplaceholder.typicode.com/posts/1')
    .then(response => {
        console.log('Заголовки:', response.headers);
        console.log('Статус:', response.status);
        console.log('Дані:', response.data);
    })
    .catch(error => {
        console.error('Помилка:', error.message);
    });
