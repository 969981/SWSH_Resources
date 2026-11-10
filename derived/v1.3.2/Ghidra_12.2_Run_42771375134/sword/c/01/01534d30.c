/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534d30; name: FUN_01534d30
 */


uint FUN_01534d30(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  ushort *puVar11;
  
  uVar4 = *param_2;
  uVar6 = (ushort)param_2[1];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  if ((uVar4 != 0x37c) || (uVar6 < 0x3e)) {
    uVar7 = param_2[3];
    uVar5 = param_2[2];
    uVar8 = FUN_01535630(param_1,uVar4);
    puVar9 = (ulong *)FUN_01535330(param_1,uVar4,uVar5,(char)uVar7);
    if (puVar9 != (ulong *)0x0) {
      uVar5 = 0;
      if (uVar6 != 1 || uVar4 != 0x2e8) {
        uVar5 = (uint)uVar6;
      }
      uVar3 = uVar5 * 7 + uVar3;
      if (uVar4 != 0x365) {
        uVar3 = uVar5;
      }
      uVar7 = 0;
      if (uVar3 < 0x3f) {
        uVar7 = uVar3;
      }
      if (uVar2 == 2) {
        uVar10 = 0x4000000000000000;
        if (uVar5 != 1 || uVar4 != 0x37c) {
          uVar10 = 0x8000000000000000;
        }
      }
      else {
        puVar11 = (ushort *)(PTR_DAT_0272a9e8 + 4);
        uVar10 = 1;
        do {
          if (uVar4 == puVar11[-2]) {
            uVar10 = uVar10 - 1;
LAB_01534e40:
            if (*(ushort *)(PTR_DAT_0272a9e8 + (uVar10 & 0xffffffff) * 4 + 2) <= uVar7)
            goto LAB_01534e68;
            goto LAB_01534e50;
          }
          if (uVar4 == *puVar11) goto LAB_01534e40;
          uVar1 = uVar10 + 1;
          uVar10 = uVar10 + 2;
          puVar11 = puVar11 + 4;
        } while (uVar1 < 0x90);
        if (uVar7 != 0) goto LAB_01534e68;
LAB_01534e50:
        uVar10 = 1L << ((ulong)uVar7 & 0x3f);
      }
      *puVar9 = *puVar9 | uVar10;
      goto LAB_01534e68;
    }
  }
  uVar8 = 0;
LAB_01534e68:
  return uVar8 & 1;
}


