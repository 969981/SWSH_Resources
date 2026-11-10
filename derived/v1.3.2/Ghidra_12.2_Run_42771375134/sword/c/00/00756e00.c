/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00756e00; name: FUN_00756e00
 */


void FUN_00756e00(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  
  *(undefined **)(param_2 + 0xb0) = PTR_DAT_02715af8 + 0x10;
  if (*(long *)(param_2 + 0xb8) == 0) {
    *(undefined8 *)(param_2 + 0xb8) = 0;
    pcVar2 = *(code **)(param_2 + 0x148);
  }
  else {
    FUN_006e2100();
    lVar1 = *(long *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_2 + 0x148);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0x150) = 0;
    *(undefined8 *)(param_2 + 0x158) = 0;
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
    (*pcVar2)(param_2 + 0x160);
  }
  pcVar2 = *(code **)(param_2 + 200);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0xd0) = 0;
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined8 *)(param_2 + 200) = 0;
    (*pcVar2)(param_2 + 0xe0);
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0xb8) = 0;
  }
  lVar1 = *(long *)(param_2 + 0x80);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x88) = lVar1;
    (**(code **)(**(long **)(param_2 + 0x98) + 0x18))
              (*(long **)(param_2 + 0x98),lVar1,*(long *)(param_2 + 0x90) - lVar1,0x10);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x38) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}


