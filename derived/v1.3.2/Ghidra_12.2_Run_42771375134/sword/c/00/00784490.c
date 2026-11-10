/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00784490; name: FUN_00784490
 */


void FUN_00784490(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined **)(param_1 + 0x40) = PTR_DAT_02710808 + 0x10;
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
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


