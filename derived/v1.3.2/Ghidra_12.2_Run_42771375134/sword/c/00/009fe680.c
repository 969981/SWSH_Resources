/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fe680; name: FUN_009fe680
 */


void FUN_009fe680(long param_1,void *param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x180);
  if (lVar1 == 0) {
    lVar1 = FUN_009ffca0(auStack_38,*(undefined8 *)(param_1 + 0x60));
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x180) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    *(long *)(param_1 + 0x180) = lVar1;
  }
  memcpy((void *)(lVar1 + 0x60),param_2,0x2300);
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_0075dd70(*(long *)(param_1 + 0x180) + 0x60,0x22fc);
  }
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 == 0) {
    lVar1 = FUN_00a00050(auStack_28,*(undefined8 *)(param_1 + 0x60));
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    *(long *)(param_1 + 0x188) = lVar1;
  }
  memcpy((void *)(lVar1 + 0x60),(void *)((long)param_2 + 0x2300),0x644);
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_0075dd70(*(long *)(param_1 + 0x188) + 0x60,0x640);
  }
  return;
}


