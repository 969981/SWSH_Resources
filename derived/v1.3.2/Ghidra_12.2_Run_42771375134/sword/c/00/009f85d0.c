/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f85d0; name: FUN_009f85d0
 */


void FUN_009f85d0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0xa58) != '\0') {
    iVar3 = 2;
  }
  uVar1 = (iVar3 + param_2 & 0xffU) + 6;
  uVar6 = (iVar3 + param_2) * 6;
  uVar2 = uVar6 & 0xfe;
  do {
    if (uVar1 <= uVar2) {
      return;
    }
    while( true ) {
      lVar4 = *(long *)(param_1 + 0x2b0);
      if (lVar4 == 0) break;
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0167b9b0(lVar4,&DAT_0214f390 + (ulong)(byte)uVar6 * 8,param_3 & 1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      uVar6 = uVar6 + 1;
      if (uVar1 <= (uVar6 & 0xff)) {
        return;
      }
    }
    FUN_0167b9b0(0,&DAT_0214f390 + (ulong)(byte)uVar6 * 8,param_3 & 1);
    uVar6 = uVar6 + 1;
    uVar2 = uVar6 & 0xff;
  } while( true );
}


