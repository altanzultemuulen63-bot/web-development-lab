<!DOCTYPE html>
<html lang="mn">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Лаборатори 02: Хэрэглэгчийн анкет</title>

  <!-- Google Fonts -->
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
  <link href="https://fonts.googleapis.com/css2?family=Montserrat:wght@600;700&family=Roboto:wght@400;500&display=swap" rel="stylesheet">

  <!-- External CSS -->
  <link rel="stylesheet" href="style.css">
</head>
<body>
  <header class="site-header">
    <span class="badge">Лаб 3</span>
    <h1 class="site-title">Оюутны Бүртгэлийн Портал</h1>
    <nav class="site-nav">
      <a class="nav-link" href="../index.html">Нүүр</a>
      <a class="nav-link" href="#">Анкет засах</a>
      <a class="nav-link" href="#">Тусламж</a>
    </nav>
  </header>

  <main class="container">
    <article>
      <section class="card">
        <h2 class="section-title">Хэрэглэгчийн Анкет Бөглөх</h2>
        <p class="lead">Доорх формын дагуу мэдээллээ бүрэн, үнэн зөв зааж бөглөнө үү.</p>

        <form action="#" method="POST" enctype="multipart/form-data">
          <fieldset class="group">
            <legend class="group-title">Хувийн мэдээлэл</legend>

            <div class="field">
              <label class="label" for="fullname">Овог нэр:</label>
              <input class="input" type="text" id="fullname" name="fullname" placeholder="И. Болдбаатар" required minlength="2">
            </div>

            <div class="field">
              <label class="label" for="email">Цахим хаяг (Email):</label>
              <input class="input" type="email" id="email" name="email" placeholder="example@domain.com" required>
            </div>

            <div class="field">
              <label class="label" for="password">
                Нууц үг:
                <span class="tooltip" tabindex="0">?
                  <span class="tooltip-text">Хамгийн багадаа 6 тэмдэгт</span>
                </span>
              </label>
              <input class="input" type="password" id="password" name="password" required minlength="6">
            </div>

            <div class="field">
              <label class="label" for="phone">Утасны дугаар:</label>
              <input class="input" type="tel" id="phone" name="phone" pattern="[0-9]{8}" title="8 оронтой тоо оруулна уу" placeholder="88112233" required>
            </div>

            <div class="field">
              <label class="label" for="dob">Төрсөн огноо:</label>
              <input class="input" type="date" id="dob" name="dob" required>
            </div>

            <div class="field">
              <span class="label">Хүйс:</span>
              <div class="options">
                <input type="radio" id="male" name="gender" value="male" required>
                <label for="male">Эрэгтэй</label>
                <input type="radio" id="female" name="gender" value="female">
                <label for="female">Эмэгтэй</label>
              </div>
            </div>
          </fieldset>

          <fieldset class="group">
            <legend class="group-title">Боловсрол ба Сонирхол</legend>

            <div class="field">
              <label class="label" for="degree">Суралцаж буй түвшин:</label>
              <select class="input" id="degree" name="degree" required>
                <option value="">-- Сонгоно уу --</option>
                <option value="bachelor">Бакалавр</option>
                <option value="master">Магистр</option>
                <option value="doctor">Докторант</option>
              </select>
            </div>

            <div class="field">
              <span class="label">Сонирхож буй технологиуд:</span>
              <div class="options options-column">
                <label class="option"><input type="checkbox" name="skills" value="HTML"> HTML5 / CSS3</label>
                <label class="option"><input type="checkbox" name="skills" value="JavaScript"> JavaScript</label>
                <label class="option"><input type="checkbox" name="skills" value="PHP"> PHP &amp; MySQL</label>
              </div>
            </div>

            <div class="field">
              <label class="label" for="avatar">Профайл зураг оруулна уу:</label>
              <input class="input input-file" type="file" id="avatar" name="avatar" accept="image/*">
            </div>

            <div class="field">
              <label class="label" for="bio">Товч танилцуулга / Өөрийн тухай:</label>
              <textarea class="input" id="bio" name="bio" rows="4" minlength="10" placeholder="Өөрийн танилцуулгыг энд бичнэ үү..."></textarea>
            </div>
          </fieldset>

          <div class="actions">
            <button class="btn btn-primary" type="submit">Анкет Илгээх</button>
            <button class="btn btn-secondary" type="reset">Дахин эхлүүлэх</button>
          </div>
        </form>
      </section>
    </article>

    <section class="card">
      <h2 class="section-title">Миний сонирхол</h2>
      <ul class="interest-list">
        <li>Веб хөгжүүлэлт</li>
        <li>Фото зураг авах</li>
        <li>Кино үзэх</li>
      </ul>
    </section>

    <section class="card">
      <h2 class="section-title">Миний дүн</h2>
      <table class="grades">
        <thead>
          <tr>
            <th>Хичээл</th>
            <th>Дүн</th>
          </tr>
        </thead>
        <tbody>
          <tr><td>Веб зохиомж</td><td>95</td></tr>
          <tr><td>Мэдээллийн сан</td><td>88</td></tr>
          <tr><td>Алгоритм</td><td>92</td></tr>
        </tbody>
      </table>
    </section>
  </main>

  <footer class="site-footer">
    <p>&copy; 2026 Веб зохиомж хичээл. Бүх эрх хуулиар хамгаалагдсан.</p>
  </footer>
</body>
</html>