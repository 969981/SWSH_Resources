/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a93ef0; name: FUN_00a93ef0
 */


/* WARNING: Removing unreachable block (ram,0x00a94668) */
/* WARNING: Removing unreachable block (ram,0x00a94680) */
/* WARNING: Removing unreachable block (ram,0x00a94688) */
/* WARNING: Removing unreachable block (ram,0x00a946a8) */

void FUN_00a93ef0(long param_1)

{
  void *__s;
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [24];
  long local_150;
  undefined8 local_148;
  char *local_140;
  undefined1 *local_138;
  long local_130;
  long local_128;
  undefined4 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  long local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  char *local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x278);
  local_70 = 0;
  local_98 = 0;
  local_90 = (char *)0xcbf29ce484222645;
  local_78 = 0;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  local_c8 = 0;
  local_c0 = 0xcbf29ce484222645;
  local_a0 = 0;
  local_a8 = 0;
  local_b8 = &DAT_01d38550;
  local_b0 = 0;
  *(undefined8 *)(param_1 + 0x110) = 0xff000000ff;
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00a95be0(param_1);
    uVar3 = (uint)*(ushort *)(param_1 + 0x10c);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x10c);
    if (uVar3 == 0xffffffff) {
      return;
    }
  }
  local_148 = 0xb3236763c32e0e7d;
  local_140 = "g_table";
  local_138 = (undefined1 *)0x7;
  FUN_012b4250(&uStack_f8,param_1 + 0x120,&local_148);
  FUN_012b4190(auStack_d8,&uStack_f8,uVar3 & 0xffff);
  local_100 = 0;
  uStack_f8 = 0x6c68b3c8ecefc59d;
  local_f0 = "bin/battle/waza/camera/wait/w_f_101.gfbcam";
  local_e8 = 0x2a;
  uStack_e0 = 0;
  local_118 = 0x25af7a6a9b6d6b34;
  local_110 = "bin/battle/waza/camera/wait/w_f_101.gfbcama";
  local_108 = 0x2b;
  local_190 = 0xa484056c41a5bc8;
  local_188 = "cameraFile";
  local_180 = 10;
  FUN_012b4250(auStack_178,auStack_d8,&local_190);
  FUN_012b4820(auStack_168,auStack_178,&uStack_f8);
  FUN_008d48d0(&local_148,auStack_168);
  if ((local_80 != 0) && (local_98 != 0)) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  local_98 = 0;
  local_90 = (char *)0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  local_78 = local_128;
  local_90 = local_140;
  local_88 = local_138;
  local_128 = 0;
  local_80 = local_130;
  local_70 = local_120;
  if (local_130 == 0) {
    local_98 = local_148;
  }
  else {
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    }
    local_98 = local_148;
  }
  local_148 = 0;
  local_140 = (char *)0xcbf29ce484222645;
  local_138 = &DAT_01d38550;
  local_130 = 0;
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
  }
  local_128 = 0;
  local_120 = 0;
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
    local_150 = 0;
  }
  local_190 = 0x40f026793d0664d0;
  local_188 = "cameraAnimeFile";
  local_180 = 0xf;
  FUN_012b4250(auStack_178,auStack_d8,&local_190);
  FUN_012b4820(auStack_168,auStack_178,&local_118);
  FUN_008d48d0(&local_148,auStack_168);
  if ((local_b0 != 0) && (local_c8 != 0)) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  local_c8 = 0;
  local_c0 = 0xcbf29ce484222645;
  local_b8 = &DAT_01d38550;
  local_b0 = 0;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
  }
  local_a8 = local_128;
  local_c0 = local_140;
  local_b8 = local_138;
  local_128 = 0;
  local_b0 = local_130;
  local_a0 = local_120;
  if (local_130 == 0) {
    local_c8 = local_148;
  }
  else {
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    }
    local_c8 = local_148;
  }
  local_148 = 0;
  local_140 = (char *)0xcbf29ce484222645;
  local_138 = &DAT_01d38550;
  local_130 = 0;
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
  }
  local_128 = 0;
  local_120 = 0;
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
    local_150 = 0;
  }
  __s = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0x110,0x10);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar2;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x110);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


