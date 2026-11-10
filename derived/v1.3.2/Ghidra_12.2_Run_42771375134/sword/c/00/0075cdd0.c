/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075cdd0; name: FUN_0075cdd0
 */


void FUN_0075cdd0(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_90;
  int local_88;
  long local_80;
  ulong local_78;
  undefined1 local_68 [28];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 auStack_28 [4];
  undefined1 local_24 [4];
  
  FUN_0075efb0(auStack_28,*(undefined8 *)(param_1 + 8),0,1);
  local_68[0] = 0;
  local_80 = CONCAT71(local_80._1_7_,1);
  local_90 = CONCAT71(local_90._1_7_,2);
  local_24[0] = 3;
  local_34[0] = 4;
  local_38[0] = 5;
  local_3c[0] = 6;
  local_40[0] = 7;
  local_44[0] = 8;
  local_48[0] = 9;
  local_4c[0] = 0xc;
  FUN_0075cfd0(*(long *)(param_1 + 0x10) + 8,local_68,&local_80,&local_90,local_24,local_34,local_38
               ,local_3c,local_40,local_44,local_48,local_4c);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar5 = *(ulong *)(*(long *)(param_2 + 8) + 400);
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x180);
  if ((*PTR_DAT_02715f48 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_02715f48);
    puVar1 = PTR_DAT_02715f50;
    if (iVar2 != 0) {
      *(undefined8 *)PTR_DAT_02715f50 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      FUN_001001c0(PTR__string_02715f58,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715f48);
    }
  }
  local_80 = lVar4;
  local_78 = uVar5;
  FUN_0075d5f0(local_68,lVar3 + 8,&local_80,PTR_DAT_02715f50,0);
  FUN_0075d210(&local_80,local_68);
  lVar3 = local_80;
  local_90 = local_80;
  FUN_0175f270(local_80,local_78 & 0xffffffff);
  local_88 = FUN_0175dbf0(lVar3,0xfff0b9d8);
  FUN_0075d4b0(param_1 + 0x30,&local_90);
  if ((local_90 != 0) && (local_88 != -2)) {
    FUN_0175dcd0(local_90,0xfff0b9d8);
  }
  FUN_0075d310(&local_80);
  FUN_0075d3e0(local_68);
  FUN_0075f0a0(auStack_28);
  return;
}


