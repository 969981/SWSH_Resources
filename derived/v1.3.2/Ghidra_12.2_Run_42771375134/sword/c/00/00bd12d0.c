/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd12d0; name: FUN_00bd12d0
 */


void FUN_00bd12d0(long param_1,int param_2,ulong param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 local_50;
  undefined8 local_48;
  
  pbVar1 = (byte *)(param_1 + 0x2d68);
  if (param_2 == 3) {
    lVar3 = 6;
    puVar2 = (undefined8 *)(param_1 + 0x2fd8);
    pbVar1 = (byte *)(param_1 + 0x2dc2);
    puVar4 = (undefined8 *)(param_1 + 0x2fa8);
    lVar5 = 6;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    lVar3 = 0x1e;
    puVar2 = (undefined8 *)(param_1 + 0x2eb8);
    puVar4 = (undefined8 *)(param_1 + 0x2dc8);
    lVar5 = 0x1e;
  }
  pbVar6 = (byte *)(param_1 + 0x2da4);
  if ((param_3 & 1) == 0) {
    pbVar6 = pbVar1;
    lVar3 = lVar5;
    puVar2 = puVar4;
  }
  do {
    local_48 = *puVar2;
    lVar5 = param_1 + (ulong)*pbVar6 * 0x78 + 0x68;
    FUN_0167c250(*(undefined8 *)(param_1 + 0x58),lVar5);
    FUN_0167bfe0(*(undefined8 *)(param_1 + 0x58),&local_48,lVar5);
    local_50 = 0;
    FUN_0167b630(*(undefined8 *)(param_1 + 0x58),lVar5,&local_50);
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
    pbVar6 = pbVar6 + 1;
  } while (lVar3 != 0);
  return;
}


