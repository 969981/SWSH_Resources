/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062c7e0; name: FUN_0062c7e0
 */


void FUN_0062c7e0(long param_1)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  
  if ((*(byte *)(param_1 + 0x485) & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x478);
  puVar7 = *(ushort **)(lVar5 + 0x60);
  if ((ulong)*puVar7 != 0) {
    puVar6 = *(undefined8 **)(puVar7 + 0x14);
    puVar1 = puVar6 + (ulong)*puVar7 * 2;
    while( true ) {
      psVar4 = (short *)FUN_0062bfe0(param_1,*puVar6);
      sVar3 = FUN_0062cc30(param_1,puVar7 + 4,*(undefined2 *)(puVar6 + 1),
                           *(undefined2 *)((long)puVar6 + 10));
      if (psVar4 != (short *)0x0) {
        *psVar4 = *(short *)((long)puVar6 + 0xc) + sVar3;
      }
      puVar6 = puVar6 + 2;
      if (puVar1 <= puVar6) break;
      puVar7 = *(ushort **)(lVar5 + 0x60);
    }
  }
  if (*(short *)(param_1 + 0x268) != -1) {
    sVar3 = *(short *)(param_1 + 0x2c2);
    sVar2 = *(short *)(param_1 + 0x2c4);
    if (sVar3 == 0 && sVar2 == 0) {
      *(short *)(param_1 + 0x8a) = *(short *)(param_1 + 0x2c8);
      sVar3 = *(short *)(param_1 + 0x2ca) + *(short *)(param_1 + 0x2c8);
      *(short *)(param_1 + 0x8c) = -*(short *)(param_1 + 0x2ca);
    }
    else {
      *(short *)(param_1 + 0x8a) = sVar3;
      *(short *)(param_1 + 0x8c) = sVar2;
      sVar3 = (sVar3 - sVar2) + *(short *)(param_1 + 0x2c6);
    }
    *(short *)(param_1 + 0x8e) = sVar3;
  }
  sVar3 = *(short *)(param_1 + 0x302);
  *(short *)(param_1 + 0x96) = sVar3;
  *(short *)(param_1 + 0x94) =
       *(short *)(param_1 + 0x300) - (short)((uint)(int)(short)(sVar3 - (sVar3 >> 0xf)) >> 1);
  FUN_00608970(param_1 + 200,&LAB_0062cdb0,0);
  return;
}


