/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00806840; name: FUN_00806840
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00806840(long param_1,undefined8 param_2,string *param_3)

{
  string sVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  string *psVar6;
  size_t sVar7;
  size_t sVar8;
  undefined8 uVar9;
  size_t sVar10;
  size_t sVar11;
  byte local_f8 [16];
  void *local_e8;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined7 uStack_a8;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  
  local_50 = 0;
  local_48 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  uVar4 = FUN_00807310(param_1,&local_58);
  if ((uVar4 & 1) != 0) {
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0x2e02;
    uVar4 = FUN_00806c70(param_1,&local_a0);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_00807310(param_1,&local_70), (uVar4 & 1) != 0)) {
      local_90 = (void *)0x0;
      local_98 = 0;
      local_a0 = 0x2e02;
      uVar4 = FUN_00806c70(param_1,&local_a0);
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if (((uVar4 & 1) != 0) && (uVar4 = FUN_00807310(param_1,&local_88), (uVar4 & 1) != 0)) {
        local_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0x2f02;
        uVar4 = FUN_00806c70(param_1,&local_a0);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_00807170(param_1,param_2), (uVar4 & 1) != 0)) {
          std::operator+((string *)&local_58,".");
          pvVar2 = (void *)((ulong)&local_70 | 1);
          if ((local_70 & 1) != 0) {
            pvVar2 = local_60;
          }
          puVar5 = (ulong *)std::string::append((char *)local_f8,(ulong)pvVar2);
          local_e0 = *puVar5;
          local_d8 = puVar5[1];
          local_d0 = (void *)puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          puVar5 = (ulong *)std::string::append((char *)&local_e0);
          local_c8 = *puVar5;
          local_c0 = puVar5[1];
          local_b8 = (void *)puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          pvVar2 = (void *)((ulong)&local_88 | 1);
          if ((local_88 & 1) != 0) {
            pvVar2 = local_78;
          }
          puVar5 = (ulong *)std::string::append((char *)&local_c8,(ulong)pvVar2);
          local_a0 = *puVar5;
          local_98 = puVar5[1];
          local_90 = (void *)puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          psVar6 = (string *)std::string::append((char *)&local_a0);
          uVar9 = *(undefined8 *)(psVar6 + 0x10);
          sVar1 = *psVar6;
          uStack_a8 = (undefined7)((ulong)*(undefined8 *)(psVar6 + 8) >> 8);
          uStack_b0 = (undefined7)*(undefined8 *)(psVar6 + 1);
          local_a9 = (undefined1)((ulong)*(undefined8 *)(psVar6 + 1) >> 0x38);
          *(undefined8 *)psVar6 = 0;
          *(undefined8 *)(psVar6 + 8) = 0;
          *(undefined8 *)(psVar6 + 0x10) = 0;
          if (((byte)*param_3 & 1) == 0) {
            *(undefined2 *)param_3 = 0;
          }
          else {
            **(undefined1 **)(param_3 + 0x10) = 0;
            *(undefined8 *)(param_3 + 8) = 0;
            if (((byte)*param_3 & 1) != 0) {
              operator_delete(*(void **)(param_3 + 0x10));
              *(undefined8 *)param_3 = 0;
            }
          }
          *param_3 = sVar1;
          *(ulong *)(param_3 + 8) = CONCAT71(uStack_a8,local_a9);
          *(ulong *)(param_3 + 1) = CONCAT17(local_a9,uStack_b0);
          *(undefined8 *)(param_3 + 0x10) = uVar9;
          uStack_a8 = 0;
          uStack_b0 = 0;
          local_a9 = 0;
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
          if ((local_c8 & 1) != 0) {
            operator_delete(local_b8);
          }
          if ((local_e0 & 1) != 0) {
            operator_delete(local_d0);
          }
          if ((local_f8[0] & 1) != 0) {
            operator_delete(local_e8);
          }
          sVar7 = strlen(PTR_s_type_googleapis_com__02716f60);
          sVar1 = *param_3;
          sVar10 = *(size_t *)(param_3 + 8);
          sVar11 = (size_t)((byte)sVar1 >> 1);
          sVar8 = sVar11;
          if (((byte)sVar1 & 1) != 0) {
            sVar8 = sVar10;
          }
          if (sVar7 == sVar8) {
            iVar3 = std::string::compare
                              ((ulong)param_3,0,(char *)0xffffffffffffffff,
                               (ulong)PTR_s_type_googleapis_com__02716f60);
            if (iVar3 != 0) {
              sVar1 = *param_3;
              sVar10 = *(size_t *)(param_3 + 8);
              sVar11 = (size_t)((byte)sVar1 >> 1);
              goto LAB_00806b54;
            }
          }
          else {
LAB_00806b54:
            sVar8 = strlen(PTR_s_type_googleprod_com__02716f68);
            if (((byte)sVar1 & 1) != 0) {
              sVar11 = sVar10;
            }
            if ((sVar8 != sVar11) ||
               (iVar3 = std::string::compare
                                  ((ulong)param_3,0,(char *)0xffffffffffffffff,
                                   (ulong)PTR_s_type_googleprod_com__02716f68), iVar3 != 0)) {
              std::operator+("TextFormat::Parser for Any supports only type.googleapis.com and type.googleprod.com, but found \""
                             ,param_3);
              puVar5 = (ulong *)std::string::append((char *)&local_c8);
              local_a0 = *puVar5;
              local_98 = puVar5[1];
              local_90 = (void *)puVar5[2];
              puVar5[1] = 0;
              puVar5[2] = 0;
              *puVar5 = 0;
              FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           &local_a0);
              if ((local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
              if ((local_c8 & 1) != 0) {
                operator_delete(local_b8);
              }
              goto LAB_00806bfc;
            }
          }
          uVar9 = 1;
          goto joined_r0x00806c04;
        }
      }
    }
  }
LAB_00806bfc:
  uVar9 = 0;
joined_r0x00806c04:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return uVar9;
}


