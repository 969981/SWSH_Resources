/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00379f60; name: FUN_00379f60
 */


void FUN_00379f60(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long local_158 [2];
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  char local_cc [4];
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long *local_98;
  long lStack_90;
  long local_88;
  undefined1 local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  iVar4 = *(int *)(*param_1 + 0x10);
  if (iVar4 != 0) {
    lVar7 = *(long *)(*param_1 + 8);
    uVar8 = (ulong)(iVar4 - 1);
    pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
    if (*pbVar9 == 0) {
      bVar6 = 0;
      if ((char)param_1[9] != '\0') {
        bVar6 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar7 + uVar8 * 0x10));
        bVar6 = bVar6 & 1;
        *(byte *)(param_1 + 9) = bVar6;
        lVar7 = *(long *)(*param_1 + 8);
        uVar8 = (ulong)(*(int *)(*param_1 + 0x10) - 1);
        pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
      }
      *(byte *)(lVar7 + uVar8 * 0x10 + 9) = bVar6;
      *pbVar9 = bVar6;
      cVar5 = (char)param_1[9];
      goto joined_r0x00379fb0;
    }
  }
  cVar5 = (char)param_1[9];
joined_r0x00379fb0:
  if (cVar5 != '\0') {
    (**(code **)(*(long *)(param_3 + 0x10) + 0x18))
              (local_158,param_1[6],*(undefined4 *)(param_3 + 8));
    local_138 = param_1[4];
    lVar2 = param_1[5];
    local_140 = param_1[3];
    lVar7 = param_1[1];
    local_148 = param_1[2];
    lVar10 = *param_1;
    lVar1 = param_1[7];
    lVar3 = param_1[8];
    local_cc[0] = '\0';
    uStack_70 = 0;
    local_80 = 1;
    local_68 = 0;
    local_130 = local_148;
    local_128 = local_140;
    local_120 = local_138;
    local_118 = local_148;
    local_110 = local_140;
    local_108 = local_138;
    local_100 = local_148;
    local_f8 = local_140;
    local_f0 = local_138;
    local_e8 = local_148;
    local_e0 = local_140;
    local_d8 = local_138;
    local_c8 = lVar10;
    local_c0 = lVar7;
    local_b8 = local_148;
    local_b0 = local_140;
    local_a8 = local_138;
    lStack_a0 = lVar2;
    local_98 = local_158;
    lStack_90 = lVar1;
    local_88 = lVar3;
    local_78 = local_cc;
    FUN_0037a1a0(&local_c8,param_4,0);
    FUN_0037a350(&local_c8,param_4 + 0x20,1);
    uStack_70 = 0;
    local_80 = 1;
    local_68 = 0;
    local_b8 = local_100;
    local_b0 = local_f8;
    local_a8 = local_f0;
    local_c8 = lVar10;
    local_c0 = lVar7;
    lStack_a0 = lVar2;
    local_98 = local_158;
    lStack_90 = lVar1;
    local_88 = lVar3;
    local_78 = local_cc;
    FUN_0037a620(&local_c8,param_4 + 0x40,0);
    FUN_0037a7d0(&local_c8,param_4 + 0x60,1);
    if (local_cc[0] != '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    local_c8 = local_158[0];
    (**(code **)(*(long *)(param_3 + 0x10) + 0x10))
              (param_1[6],*(undefined4 *)(param_3 + 8),&local_c8);
  }
  return;
}


