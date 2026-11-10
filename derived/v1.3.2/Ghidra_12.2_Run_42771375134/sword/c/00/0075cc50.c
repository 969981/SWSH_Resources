/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075cc50; name: FUN_0075cc50
 */


void FUN_0075cc50(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  FUN_0075efb0(auStack_38,*(undefined8 *)(param_1 + 8),0,1);
  local_48 = 0;
  local_40 = 0xfffffffe;
  FUN_0075d4b0((long *)(param_1 + 0x30),&local_48);
  if ((local_48 != 0) && ((int)local_40 != -2)) {
    FUN_0175dcd0(local_48,0xfff0b9d8);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    if ((plVar2[4] != 0) && ((int)plVar2[5] != -2)) {
      FUN_0175dcd0(plVar2[4],0xfff0b9d8);
    }
    if ((plVar2[2] != 0) && ((int)plVar2[3] != -2)) {
      FUN_0175dcd0(plVar2[2],0xfff0b9d8);
    }
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_01766c70();
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),plVar2,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
  FUN_0075f0a0(auStack_38);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x38) != -2)) {
    FUN_0175dcd0(lVar1,0xfff0b9d8);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    if ((plVar2[4] != 0) && ((int)plVar2[5] != -2)) {
      FUN_0175dcd0(plVar2[4],0xfff0b9d8);
    }
    if ((plVar2[2] != 0) && ((int)plVar2[3] != -2)) {
      FUN_0175dcd0(plVar2[2],0xfff0b9d8);
    }
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_01766c70();
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),plVar2,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}


