/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b4b80; name: FUN_007b4b80
 */


void FUN_007b4b80(long param_1,UserHandle *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 *local_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 auStack_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  char local_84 [12];
  undefined1 auStack_78 [24];
  
  FUN_01866da0(&local_90);
  puVar1 = PTR_DAT_02716a40;
  local_90 = 1;
  local_84[0] = s_eCZWFv0X_01d3dc5e[0];
  local_84[1] = s_eCZWFv0X_01d3dc5e[1];
  local_84[2] = s_eCZWFv0X_01d3dc5e[2];
  local_84[3] = s_eCZWFv0X_01d3dc5e[3];
  local_84[4] = s_eCZWFv0X_01d3dc5e[4];
  local_84[5] = s_eCZWFv0X_01d3dc5e[5];
  local_84[6] = s_eCZWFv0X_01d3dc5e[6];
  local_84[7] = s_eCZWFv0X_01d3dc5e[7];
  local_8c = DAT_01d3dc56;
  local_ac = 0;
  local_dc = 0;
  local_e4 = 0;
  local_ec = 0;
  local_f4 = 0;
  local_fc = 0;
  local_118 = PTR_DAT_02716a40 + 0x10;
  local_110 = &local_fc;
  local_108 = 0x50;
  local_b4 = 0;
  local_bc = 0;
  local_c4 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_104 = 0;
  local_a8 = 0xff;
  local_a0 = 0;
  local_98 = 0;
  local_128 = 0;
  local_120 = 0;
  nn::account::GetUserId((Uid *)&local_128,param_2);
  local_a0 = local_128;
  local_98 = local_120;
  local_a8 = param_4;
  FUN_01870100(&local_158,param_3);
  FUN_01870310(auStack_138,&local_118,&local_158);
  *(undefined8 *)(param_1 + 0x1c8) = local_128;
  *(undefined8 *)(param_1 + 0x1d0) = local_120;
  *(undefined2 *)(param_1 + 0x1d8) = *(undefined2 *)(param_1 + 0x220);
  cVar3 = FUN_007a9cb0();
  if (cVar3 == '\x03') {
    FUN_007b5ee0(&local_158,*(undefined8 *)(param_1 + 0x50));
    FUN_01866db0(local_158 + 0x8d,&local_90);
    puVar6 = local_158;
    FUN_01870310(auStack_78,local_158 + 4,&local_118);
    *(undefined1 *)(puVar6 + 0x20) = local_a8;
    *(undefined8 *)(puVar6 + 0x22) = local_a0;
    *(undefined8 *)(puVar6 + 0x24) = local_98;
  }
  else {
    if (cVar3 != '\x02') {
      if (cVar3 == '\0') {
        plVar7 = *(long **)(param_1 + 0x50);
        puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0xb0,8);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *puVar4 = 0x3e800002710;
        puVar4[1] = 0;
        puVar4[2] = puVar1 + 0x10;
        *(undefined1 *)((long)puVar4 + 0x7c) = 0;
        *(undefined8 *)((long)puVar4 + 0x2c) = 0;
        *(undefined4 *)(puVar4 + 4) = 0x50;
        puVar4[3] = (undefined8 *)((long)puVar4 + 0x2c);
        *(undefined8 *)((long)puVar4 + 0x74) = 0;
        *(undefined8 *)((long)puVar4 + 0x6c) = 0;
        *(undefined8 *)((long)puVar4 + 100) = 0;
        *(undefined8 *)((long)puVar4 + 0x5c) = 0;
        *(undefined8 *)((long)puVar4 + 0x54) = 0;
        *(undefined8 *)((long)puVar4 + 0x4c) = 0;
        *(undefined8 *)((long)puVar4 + 0x44) = 0;
        *(undefined8 *)((long)puVar4 + 0x3c) = 0;
        *(undefined8 *)((long)puVar4 + 0x34) = 0;
        *(undefined8 *)((long)puVar4 + 0x24) = 0;
        *(undefined1 *)(puVar4 + 0x10) = 0xff;
        *(undefined1 *)(puVar4 + 0x13) = 1;
        puVar4[0x11] = 0;
        puVar4[0x12] = 0;
        FUN_01866da0((long)puVar4 + 0x9c);
        puVar4[0x14] = 0;
        puVar4[0x15] = 0;
        *puVar4 = 0x19000000fa0;
        *(undefined4 *)((long)puVar4 + 0x9c) = 1;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        FUN_01866db0((long)puVar4 + 0x9c,&local_90);
        FUN_01870310(&local_158,puVar4 + 2,&local_118);
        *(undefined1 *)(puVar4 + 0x10) = local_a8;
        *(undefined1 *)(puVar4 + 0x13) = 0;
        puVar4[0x11] = local_a0;
        puVar4[0x12] = local_98;
        *puVar4 = 0x3e800002710;
        puVar4[1] = param_1 + 0x1c8;
        lVar5 = *(long *)(param_1 + 0x1f8);
        *(undefined8 **)(param_1 + 0x1f8) = puVar4;
        if (lVar5 != 0) {
          (**(code **)(**(long **)(param_1 + 0x200) + 0x18))
                    (*(long **)(param_1 + 0x200),lVar5,*(undefined8 *)(param_1 + 0x208),
                     *(undefined8 *)(param_1 + 0x210));
        }
        *(undefined8 *)(param_1 + 0x208) = 0xb0;
        *(long **)(param_1 + 0x200) = plVar7;
        *(undefined8 *)(param_1 + 0x210) = 8;
        return;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x1f8);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
      local_150 = *(long **)(param_1 + 0x200);
      uStack_148 = *(undefined8 *)(param_1 + 0x208);
      local_140 = *(undefined8 *)(param_1 + 0x210);
      goto LAB_007b4f14;
    }
    FUN_007b5c90(&local_158,*(undefined8 *)(param_1 + 0x50));
    puVar6 = local_158;
    FUN_01870310(auStack_78,local_158 + 6,&local_118);
    *(undefined1 *)(puVar6 + 0x22) = local_a8;
    *(undefined8 *)(puVar6 + 0x24) = local_a0;
    *(undefined8 *)(puVar6 + 0x26) = local_98;
    *(undefined1 *)(local_158 + 0x98) = 1;
    *(undefined1 *)(local_158 + 0x9c) = 0;
  }
  puVar6 = local_158;
  local_158[1] = 1000;
  *local_158 = 10000;
  *(long *)(local_158 + 2) = param_1 + 0x1c8;
  local_158 = (undefined4 *)0x0;
  lVar5 = *(long *)(param_1 + 0x1f8);
  *(undefined4 **)(param_1 + 0x1f8) = puVar6;
  if (lVar5 == 0) {
    bVar2 = true;
    puVar6 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x200) + 0x18))
              (*(long **)(param_1 + 0x200),lVar5,*(undefined8 *)(param_1 + 0x208),
               *(undefined8 *)(param_1 + 0x210));
    bVar2 = local_158 == (undefined4 *)0x0;
    puVar6 = local_158;
  }
  *(long **)(param_1 + 0x200) = local_150;
  *(undefined8 *)(param_1 + 0x208) = uStack_148;
  *(undefined8 *)(param_1 + 0x210) = local_140;
  local_158 = (undefined4 *)0x0;
  if (bVar2) {
    return;
  }
LAB_007b4f14:
  (**(code **)(*local_150 + 0x18))(local_150,puVar6,uStack_148,local_140);
  return;
}


