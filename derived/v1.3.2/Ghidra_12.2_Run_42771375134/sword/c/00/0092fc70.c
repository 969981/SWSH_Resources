/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092fc70; name: FUN_0092fc70
 */


ulong FUN_0092fc70(long param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 != (int *)0x0) {
    uVar9 = (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6));
    uVar10 = (ulong)*(uint *)((long)piVar6 + uVar9);
    uVar1 = *(uint *)((long)((long)piVar6 + uVar9) + uVar10);
    if (10 < uVar1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (uVar1 != 0) {
      uVar11 = 0;
      uVar1 = param_3 & 0xff;
      do {
        if (*(char *)(param_1 + uVar11 + 0x10) != '\0') goto switchD_0092fd40_default;
        puVar7 = (uint *)((long)piVar6 + uVar11 * 4 + uVar10 + uVar9 + 4);
        piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
        puVar8 = (ushort *)((long)piVar6 - (long)*piVar6);
        uVar2 = *puVar8;
        if (uVar2 < 5) {
          if (param_2 == 0) goto code_r0x0092fd38;
          goto switchD_0092fd40_default;
        }
        uVar12 = 0;
        if ((ulong)puVar8[2] != 0) {
          uVar12 = (uint)*(byte *)((long)piVar6 + (ulong)puVar8[2]);
        }
        if (uVar12 != param_2) goto switchD_0092fd40_default;
code_r0x0092fd38:
        switch(param_2) {
        case 0:
        case 7:
        case 0xd:
          if ((uVar2 < 7) || ((ulong)puVar8[3] == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (ulong)*(uint *)((long)piVar6 + (ulong)puVar8[3]);
          }
          uVar4 = FUN_00931a90(*(undefined8 *)(param_1 + 0x20));
          uVar10 = FUN_00930550(uVar4,0);
          if (uVar10 == uVar9) {
            return uVar11;
          }
          break;
        case 1:
          uVar9 = FUN_0092ff80(param_1,piVar6,param_3);
          goto joined_r0x0092fe58;
        case 2:
        case 3:
        case 4:
        case 8:
        case 9:
        case 10:
          if ((uVar2 < 7) || ((ulong)puVar8[3] == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(uint *)((long)piVar6 + (ulong)puVar8[3]);
          }
          uVar3 = FUN_008f94e0(param_3);
          if (uVar12 == (uVar3 & 0xff)) {
            return uVar11;
          }
          break;
        case 5:
          uVar9 = FUN_00930070(param_1,piVar6);
joined_r0x0092fe58:
          if ((uVar9 & 1) != 0) {
            return uVar11;
          }
          break;
        case 6:
          if (uVar2 < 7) {
            uVar12 = 0;
LAB_0092feb8:
            iVar5 = 0;
          }
          else {
            uVar12 = 0;
            if ((ulong)puVar8[3] != 0) {
              uVar12 = *(uint *)((long)piVar6 + (ulong)puVar8[3]);
            }
            if (uVar2 < 9) {
              iVar5 = 0;
            }
            else {
              if ((ulong)puVar8[4] == 0) goto LAB_0092feb8;
              iVar5 = *(int *)((long)piVar6 + (ulong)puVar8[4]);
            }
          }
          if ((uVar12 == uVar1) && (iVar5 == param_4)) {
            return uVar11;
          }
          break;
        case 0xb:
          if ((uVar2 < 7) || ((ulong)puVar8[3] == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(uint *)((long)piVar6 + (ulong)puVar8[3]);
          }
          uVar3 = FUN_008f94e0(param_3);
          if (uVar12 == (uVar3 & 0xff)) {
            if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
               (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar9 == 0)) {
              uVar12 = param_5 & 0xff;
              goto joined_r0x0092fed4;
            }
            if ((*(uint *)((long)piVar6 + uVar9) & 0xff) == (param_5 & 0xff)) {
              return uVar11;
            }
          }
          break;
        case 0xc:
          return uVar11;
        case 0xe:
          uVar12 = uVar1;
          if ((uVar2 < 7) || ((ulong)puVar8[3] == 0)) {
joined_r0x0092fed4:
            if (uVar12 == 0) {
              return uVar11;
            }
          }
          else if (*(uint *)((long)piVar6 + (ulong)puVar8[3]) == uVar1) {
            return uVar11;
          }
        }
switchD_0092fd40_default:
        uVar12 = (int)uVar11 + 1U & 0xff;
        uVar11 = (ulong)uVar12;
        piVar6 = *(int **)(param_1 + 8);
        uVar9 = (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6));
        uVar10 = (ulong)*(uint *)((long)piVar6 + uVar9);
        if (*(uint *)((long)((long)piVar6 + uVar9) + uVar10) <= uVar12) {
          return 0xffffffff;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}


