/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fe9b0; name: FUN_009fe9b0
 */


void FUN_009fe9b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_2 + 0x180);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x180);
    if (lVar2 == 0) {
      lVar2 = FUN_009ffca0(auStack_38,*(undefined8 *)(param_1 + 0x60));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x180) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x180) = 0;
      }
      *(long *)(param_1 + 0x180) = lVar2;
      lVar1 = *(long *)(param_2 + 0x180);
    }
    memcpy((void *)(lVar2 + 0x60),(void *)(lVar1 + 0x60),0x2300);
  }
  lVar1 = *(long *)(param_2 + 0x188);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar2 == 0) {
      lVar2 = FUN_00a00050(auStack_28,*(undefined8 *)(param_1 + 0x60));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x188) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x188) = 0;
      }
      *(long *)(param_1 + 0x188) = lVar2;
      lVar1 = *(long *)(param_2 + 0x188);
    }
    memcpy((void *)(lVar2 + 0x60),(void *)(lVar1 + 0x60),0x644);
  }
  return;
}


