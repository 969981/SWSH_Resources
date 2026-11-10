/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd210; name: FUN_008dd210
 */


undefined8 FUN_008dd210(long param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  for (lVar4 = *(long *)(param_1 + 0x1608); lVar4 != 0; lVar4 = FUN_008db990(lVar4)) {
    cVar1 = FUN_008db9d0(lVar4);
    if ((cVar1 == '\x02') && (uVar2 = FUN_008dba00(lVar4), (uVar2 & 0xffff) == param_4)) {
      uVar3 = FUN_008db9f0(lVar4);
      uVar2 = param_3;
      if (((uVar3 & 0xff) == (param_2 & 0xff)) ||
         (uVar2 = param_2, (uVar3 & 0xff) == (param_3 & 0xff))) {
        FUN_008dbac0(lVar4,uVar2);
      }
    }
  }
  return 0;
}


