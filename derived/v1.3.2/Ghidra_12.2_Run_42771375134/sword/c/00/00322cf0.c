/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00322cf0; name: FUN_00322cf0
 */


void FUN_00322cf0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined1 *puStack_c8;
  long local_c0;
  long lStack_b8;
  undefined1 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  char local_44 [4];
  
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 != 0) {
    lVar4 = *(long *)(*param_1 + 8);
    uVar5 = (ulong)(iVar1 - 1);
    pbVar6 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
    if (*pbVar6 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar4 + uVar5 * 0x10));
        bVar3 = bVar3 & 1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar4 = *(long *)(*param_1 + 8);
        uVar5 = (ulong)(*(int *)(*param_1 + 0x10) - 1);
        pbVar6 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
      }
      *(byte *)(lVar4 + uVar5 * 0x10 + 9) = bVar3;
      *pbVar6 = bVar3;
      cVar2 = (char)param_1[9];
      goto joined_r0x00322d38;
    }
  }
  cVar2 = (char)param_1[9];
joined_r0x00322d38:
  if (cVar2 != '\0') {
    (**(code **)(param_3 + 0x18))(&local_130,param_1[6]);
    local_100 = param_1[4];
    local_d0 = param_1[5];
    local_108 = param_1[3];
    lStack_f0 = param_1[1];
    local_110 = param_1[2];
    local_f8 = *param_1;
    local_c0 = param_1[7];
    lStack_b8 = param_1[8];
    local_44[0] = '\0';
    local_a8 = local_44;
    local_98 = 0;
    uStack_a0 = 0;
    local_b0 = 1;
    local_e8 = local_110;
    local_e0 = local_108;
    lStack_d8 = local_100;
    puStack_c8 = (undefined1 *)&local_130;
    local_90 = local_110;
    local_88 = local_108;
    lStack_80 = local_100;
    local_78 = local_110;
    local_70 = local_108;
    local_68 = local_100;
    local_60 = local_110;
    local_58 = local_108;
    local_50 = local_100;
    FUN_00322ea0(&local_f8,param_4,0);
    FUN_00323060(&local_f8,param_4 + 0x20,1);
    if (local_44[0] != '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    local_f8 = local_130;
    lStack_f0 = uStack_128;
    local_e8 = local_120;
    local_e0 = CONCAT44(local_e0._4_4_,local_118);
    (**(code **)(param_3 + 0x20))(param_1[6],&local_f8);
  }
  return;
}


