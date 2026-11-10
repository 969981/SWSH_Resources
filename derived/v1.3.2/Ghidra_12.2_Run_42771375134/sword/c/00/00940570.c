/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940570; name: FUN_00940570
 */


bool FUN_00940570(long param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = FUN_00945f40(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    do {
      plVar3 = (long *)FUN_00946110(*(undefined8 *)(param_1 + 0x10),uVar4);
      if (((*plVar3 != 0) && (cVar1 = FUN_008e0a00(), cVar1 != param_2)) &&
         (iVar6 = iVar6 + 1, *(char *)((long)plVar3 + 0x59) != '\0')) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00945f40(*(undefined8 *)(param_1 + 0x10));
    } while (uVar4 < (uVar2 & 0xff));
  }
  return iVar6 == iVar5;
}


