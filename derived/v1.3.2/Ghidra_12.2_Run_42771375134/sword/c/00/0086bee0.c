/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0086bee0; name: FUN_0086bee0
 */


void FUN_0086bee0(long param_1,undefined8 param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined1 auStack_4c [28];
  
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  if (0xc < param_3) {
    param_3 = 0xd;
  }
  if ((*(byte *)(puVar5 + 1) >> 2 & 1) == 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN_00867850(puVar5 + 2,0x140,*puVar5);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
      sVar1 = *(short *)(*(long *)(param_1 + 0x10) + 6);
      sVar2 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
      if (sVar1 != sVar2) {
        *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
      }
    }
    puVar6 = *(uint **)(param_1 + 0x10);
    if (((byte)puVar6[1] >> 2 & 1) == 0) {
      puVar6 = puVar6 + (ulong)(byte)(&DAT_02143949)[((ulong)(*puVar6 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
    }
    else {
      puVar6 = (uint *)PTR_DAT_02717378;
    }
    FUN_0077d7e0(param_2,puVar6,param_3);
    if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar3 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
        *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar3;
        FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
      }
      if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0))
      {
        FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  else {
    uVar4 = FUN_00869620(param_1);
    FUN_00864810(auStack_4c,899,uVar4);
    FUN_0077d7e0(param_2,auStack_4c,param_3);
  }
  return;
}


