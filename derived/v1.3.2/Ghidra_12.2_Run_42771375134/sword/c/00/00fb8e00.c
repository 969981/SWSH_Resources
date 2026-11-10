/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb8e00; name: FUN_00fb8e00
 */


void FUN_00fb8e00(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (lVar7 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00e870e0(lVar7,param_2);
  *(long **)(lVar7 + 8) = param_2;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x98;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x220) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  *(long *)(param_1 + 0x220) = lVar7;
  local_c0 = 0xf22c14aa90163c15;
  local_d0 = 0x7c08eae870e235e0;
  local_b8 = CONCAT44(local_b8._4_4_,0x42b40000);
  local_c8 = (char *)0xd32a13c3020ab619;
  uVar8 = FUN_00fbae70(lVar7,&local_d0);
  *(undefined8 *)(param_1 + 0x228) = uVar8;
  local_c8 = (char *)0xc3103acd5d06d60d;
  uVar8 = FUN_00fbae70(*(undefined8 *)(param_1 + 0x220),&local_d0);
  puVar4 = PTR_DAT_027152c0;
  *(undefined8 *)(param_1 + 0x230) = uVar8;
  local_60 = *(undefined8 *)puVar4;
  uStack_58 = *(undefined8 *)(puVar4 + 8);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_d0 = 0xc1bec9c6a7de8f02;
  local_c8 = "bin/field/model/unit_obj/unit_obj_tent02/unit_obj_tent02.gfbmdl";
  local_c0 = 0x3f;
  local_b8 = 0;
  local_b0 = 0x745bb302af606ac3;
  pcStack_a8 = "bin/field/model/unit_obj/unit_obj_tent02/unit_obj_tent02.gfbanmcfg";
  local_a0 = 0x42;
  local_98 = 0;
  local_90 = 0x13fa66666;
  local_88 = 0x4316000000000000;
  local_50 = 0x75d569ee8d71f88f;
  uVar8 = FUN_00fbaff0(*(undefined8 *)(param_1 + 0x220),&local_d0);
  *(undefined8 *)(param_1 + 0x238) = uVar8;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  lVar7 = *(long *)(param_1 + 0x220);
  uVar5 = FUN_00e84680(0,0,0,0,0,0,0x3f800000,0x3f800000,*(undefined8 *)(lVar7 + 0x78),0,0,0);
  lVar6 = *(long *)(lVar7 + 0x78);
  *(undefined1 *)(lVar6 + 0x46) = 1;
  iVar1 = *(int *)(lVar6 + 0x20);
  iVar2 = *(int *)(lVar6 + 0x30);
  iVar3 = *(int *)(lVar6 + 0x28);
  FUN_00e84810(lVar6,8,0x65de002f77d5051d,0);
  FUN_00e84810(lVar6,6,0x68c3754f4bf8081a,0);
  FUN_00dae220(0,0,lVar6,0x10);
  FUN_00dae220(0,0,lVar6,0xe);
  FUN_00dae220(0,0,lVar6,0xc);
  FUN_00dae220(0,0,lVar6,10);
  FUN_00e84a80(lVar6,4,uVar5);
  uVar9 = FUN_00dae710(lVar6,(iVar1 - iVar2) + iVar3);
  lVar6 = *(long *)(lVar7 + 0x78);
  *(ulong *)(param_1 + 0x240) =
       (*(long *)(lVar6 + 0x30) +
       (ulong)(uint)((*(int *)(lVar6 + 0x20) - (int)*(long *)(lVar6 + 0x30)) +
                    *(int *)(lVar6 + 0x28))) - (uVar9 & 0xffffffff);
  local_d0 = 0x1e0aa5e080752430;
  local_c8 = "bin/field/effect/particle/ef_env_wr0101/ef_env_wr0101_noroshi.ptcl";
  local_c0 = 0x42;
  local_b8 = 0;
  uVar8 = FUN_00fbb230(*(undefined8 *)(param_1 + 0x220),&local_d0);
  *(undefined8 *)(param_1 + 0x248) = uVar8;
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return;
}


