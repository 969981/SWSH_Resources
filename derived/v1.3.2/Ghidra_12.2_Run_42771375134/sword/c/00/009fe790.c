/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fe790; name: FUN_009fe790
 */


bool FUN_009fe790(long param_1,void *param_2)

{
  short sVar1;
  short sVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  lVar3 = *(long *)(param_1 + 0x180);
  if (lVar3 == 0) {
    lVar3 = FUN_009ffca0(auStack_28,*(undefined8 *)(param_1 + 0x60));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x180) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    *(long *)(param_1 + 0x180) = lVar3;
  }
  memcpy((void *)(lVar3 + 0x60),param_2,0x2300);
  lVar3 = *(long *)(param_1 + 0x180);
  if (lVar3 == 0) {
    return false;
  }
  sVar1 = *(short *)(lVar3 + 0x235c);
  sVar2 = FUN_0075dd70(lVar3 + 0x60,0x22fc);
  return sVar2 == sVar1;
}


