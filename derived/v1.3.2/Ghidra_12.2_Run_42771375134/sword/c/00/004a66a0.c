/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a66a0; name: FUN_004a66a0
 */


byte * FUN_004a66a0(undefined4 param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  size_t __n;
  
  pbVar8 = *(byte **)(param_2 + 0x18);
  if (pbVar8 != (byte *)0x0) {
    uVar7 = 0;
    pbVar5 = pbVar8 + ((ulong)(*pbVar8 + 4) & 0x1fc);
    do {
      if ((uint)pbVar8[uVar7 + 1] == (param_3 & 0xff)) {
        if (pbVar5 != (byte *)0x0) {
          return pbVar5;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (uVar7 < *pbVar8);
  }
  iVar4 = FUN_004a4970(*(long *)(param_2 + 8) + 0x40,
                       *(undefined4 *)(PTR_DAT_02712b48 + (ulong)param_3 * 4));
  puVar3 = PTR_DAT_02712a90;
  if (iVar4 == 1) {
    if (*(byte **)(param_2 + 0x18) == (byte *)0x0) {
      __n = 0;
    }
    else {
      __n = (size_t)**(byte **)(param_2 + 0x18);
    }
    iVar4 = (int)__n;
    uVar2 = iVar4 + 5U & 0x1fc;
    uVar7 = (ulong)uVar2;
    lVar1 = __n + 1;
    puVar6 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)lVar1 * 0x10);
    pbVar8 = (byte *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        memcpy(puVar6 + 1,(void *)(*(long *)(param_2 + 0x18) + 1),__n);
        memcpy(puVar6 + uVar7,(void *)(*(long *)(param_2 + 0x18) + (ulong)(iVar4 + 4U & 0x1fc)),
               (ulong)(uint)(iVar4 << 4));
        FUN_00404870(*(undefined4 *)puVar3,*(undefined8 *)(param_2 + 0x18));
      }
      pbVar8 = puVar6 + __n * 0x10 + uVar7;
      puVar6[lVar1] = (char)param_3;
      *puVar6 = (char)lVar1;
      *(undefined1 **)(param_2 + 0x18) = puVar6;
      if (pbVar8 != (byte *)0x0) {
        *(undefined4 *)pbVar8 = param_1;
        *(undefined8 *)(puVar6 + __n * 0x10 + uVar7 + 8) = 0;
      }
    }
  }
  else {
    pbVar8 = (byte *)0x0;
  }
  return pbVar8;
}


