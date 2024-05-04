# ElementUI UMG Kit - UE5 Plugin

**An easy way to change the style of your elements that extends beyond the default ones the Common UI provides.**

![alt text](https://i.imgur.com/tvVaHcT.png)

_\*Ready to use, drag & drop_

## Info

These are not Elements wrapped in a Widget Blueprint exposing _some_ functionality one by one. These are elements that extends the default ones allowing a `TextBox` for example to inherit the style from _CommonUI Button Style_ while keeping full access to all the default properties.

This allows for easy changes to the style, some of the elements are based on others, for example chaning `ElementUI_Style_Btn_Primary` will change the style for all of them, while these keep their respective colors.

## How to use it?

Search for `ElementUI_` in your Blueprint Widget

<details>
  <summary>Preview elements</summary>

![alt text](https://i.imgur.com/nqDP0dq.png)

</details>

<details>
  <summary>Preview edit</summary>

![alt text](https://i.imgur.com/F8lKlpj.png)

</details>

## How to change the styles?

In your blueprint widget, click an element and it will have a _"Style"_ property that can be changed and allow only styles specific to that element.
Or to create a new one beside the Common UI Style, search for `ELMT`

See `UMGELMTKit/Content/Interface/Style/`

## Styles Inheritance order

**Buttons**

```
UMGELMTKit/Content/Interface/Style/Buttons/ElementUI_Style_Btn_Primary
├─ ElementUI_Style_Btn_*
└─ ElementUI_Style_Btn_Secondary
   ├─ ElementUI_Style_Btn_Borderless
   └─ ElementUI_Style_Btn_Outline
      ├─ ElementUI_Style_TextBox
      └─ ElementUI_Style_Combo
```

**Normal Text**

```
UMGELMTKit/Content/Interface/Style/Text/ElementUI_Style_Text_Normal
├─ ElementUI_Style_Text_Normal_Gray
└─ ElementUI_Style_Text_Normal_Gray
```

**Small Text**

```
UMGELMTKit/Content/Interface/Style/Text/ElementUI_Style_Text_Small
├─ ElementUI_Style_Text_Small_Gray
└─ ElementUI_Style_Text_Small_Gray
```



## Elements

Prefix: `ElementUI_`

Elements that support the CommonUI Style pattern:

- Texts (11 Styles) _\*Use Common UI Text_
- Buttons (7 Styles)
- Borders (2 Styles)
- TextBox
- CheckBox
- Combo
- ProgressBar
- Slider

## Components

Prefix: `ElementUI_C_`

Components are widget blueprints made with elements.

<details>
  <summary>Alert Dialog</summary>

    UMGELMTKit/Content/Interface/Components/ElementUI_C_AlertDialog

![alt text](https://i.imgur.com/ZtCLHC6.png)

</details>

<details>
  <summary>CheckBox Label</summary>

    UMGELMTKit/Content/Interface/Components/ElementUI_C_CheckboxLabel

![alt text](https://i.imgur.com/YKAvQbg.png)

</details>

## Extra

- Custom DPI Scale that matches some desktop app behaviour (see UMGELMTKit/Content/Interface/ElementUI_DPI_Curve)

- 3 Demo Widgets including this Email Dashboard inspired from [shadcn](https://ui.shadcn.com/examples/mail):

<!-- <details> -->
  <!-- <summary>Preview</summary> -->

![alt text](https://i.imgur.com/U7s8kmO.png)

<!-- </details> -->
