/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0010aa20; name: FUN_0010aa20
 */


void FUN_0010aa20(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  *(undefined **)(param_1 + 0x150) = PTR_DAT_02710ad8 + 0x10;
  if (*(long *)(param_1 + 0x158) == 0) {
    *(undefined8 *)(param_1 + 0x158) = 0;
    pcVar2 = *(code **)(param_1 + 0x1e8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x158),param_1 + 0x150);
    lVar1 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0x1e8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    (*pcVar2)(param_1 + 0x200);
  }
  pcVar2 = *(code **)(param_1 + 0x168);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    (*pcVar2)(param_1 + 0x180);
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined **)(param_1 + 0x40) = PTR_DAT_02710a48 + 0x10;
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    pcVar2 = *(code **)(param_1 + 0xd8);
  }
  else {
    FUN_006e2100();
    lVar1 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0xd8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar2)(param_1 + 0xf0);
  }
  pcVar2 = *(code **)(param_1 + 0x58);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    (*pcVar2)(param_1 + 0x70);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x48) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x18) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


