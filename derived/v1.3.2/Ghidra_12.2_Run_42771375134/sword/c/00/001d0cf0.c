/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d0cf0; name: FUN_001d0cf0
 */


void FUN_001d0cf0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_50;
  long local_48;
  
  puVar1 = PTR_DAT_02711068;
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar6 = *(long *)(param_2 + 8);
    uVar5 = 0;
    do {
      while( true ) {
        lVar4 = *(long *)(lVar6 + uVar5 * 8);
        if (*(uint *)(lVar4 + 8) >> 0x1e != 1) break;
        FUN_001e0710(lVar4,&local_48,&local_50);
        if (local_48 == 0) {
          lVar2 = 0;
          if (local_50 == 0) goto LAB_001d0db8;
LAB_001d0d74:
          lVar3 = *(long *)(puVar1 + (ulong)(*(byte *)(local_50 + 0xb) & 0xf) * 8 + 0x30) + local_50
          ;
        }
        else {
          lVar2 = *(long *)(puVar1 + (ulong)(*(byte *)(local_48 + 0xb) & 0xf) * 8 + 0x30) + local_48
          ;
          if (local_50 != 0) goto LAB_001d0d74;
LAB_001d0db8:
          lVar3 = 0;
        }
        FUN_003dfa70(param_1 + 0x10,lVar4 + 0x18,lVar2,lVar3);
        uVar5 = uVar5 + 1;
        if (*(uint *)(param_2 + 0x34) <= uVar5) {
          return;
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) {
        FUN_001d7c70(lVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0x34));
  }
  return;
}


