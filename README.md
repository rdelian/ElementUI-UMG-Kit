# ElementUI UMG Kit - UE5 Plugin

**An easy way to change the style of your elements that extends beyond the default ones the Common UI provides.**

![alt text](https://i.imgur.com/ct14OHy.png)

_\*Ready to use, drag & drop_

## Info

**These are not Elements wrapped in a Widget Blueprint exposing _some_ functionality one by one.** 

These are elements that extend the default ones allowing a `TextBox` for example to inherit the style from _CommonUI Button Style_ while keeping full access to all the default properties.

This allows for easy changes to the style, some of the elements are based on others for example, changing `ElementUI_Style_Btn_Primary` will change the style for all of them, while these keep their respective colors.

## How to install?
Place the plugin folder in your game `/Plugins/` folder

_If binaries are not available for your engine version, use the source code and build the project._

## How to use it?

> [!TIP]
> _Don't modify the plugin files, instead use inheritance (create child) where you can or copy_


Search for `ElementUI_` in your Blueprint Widget

<details>
  <summary>Preview elements</summary>

![alt text](https://i.imgur.com/EbAv9nc.png)

</details>

## How to change the styles?

In your blueprint widget, click an element and it will have a _"Style"_ property that can be changed and allow only styles specific to that element.
Or to create a new one besides the Common UI Style, search for `ELMT`

See `UMGELMTKit/Content/Interface/Style/`

## Customizable `Elements`

Prefix: `ElementUI_`

Elements that support the CommonUI Style pattern:

- Texts (11 Styles) _\*Use Common UI Text_
- Buttons (7 Styles) _\*Parent + 6 (child) variants)_
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

`UMGELMTKit/Interface/Components/ElementUI_C_AlertDialog`

![alt text](https://i.imgur.com/ZtCLHC6.png)

</details>

<details>
  <summary>CheckBox Label</summary>

`UMGELMTKit/Interface/Components/ElementUI_C_CheckboxLabel`

![alt text](https://i.imgur.com/YKAvQbg.png)

</details>


<details>
  <summary>RadioGroup</summary>

`UMGELMTKit/Interface/Components/ElementUI_C_RadioGroup`
  
![alt text](https://i.imgur.com/xALDCJc.png)

</details>

## Extra

- Custom DPI Scale that matches some desktop app behavior (see UMGELMTKit/Content/Interface/ElementUI_DPI_Curve)

- 3 Demo Widgets including this Email Dashboard inspired by [shadcn](https://ui.shadcn.com/examples/mail):

<!-- <details> -->
  <!-- <summary>Preview</summary> -->

![alt text](https://i.imgur.com/U7s8kmO.png)

<!-- </details> -->
