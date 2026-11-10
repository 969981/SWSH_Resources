/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011bb5a0; name: FUN_011bb5a0
 */


uint FUN_011bb5a0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  string *this;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  string *psVar8;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  plVar7 = *(long **)(param_1 + 0x10);
  puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_011c3aa0(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  *(uint *)(param_1 + 0x39c) = (uint)*(ushort *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x3a4) = (uint)*(ushort *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x14);
  *(uint *)(param_1 + 0x3ac) = (uint)*(ushort *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x1c);
  *(uint *)(param_1 + 0x3b4) = (uint)*(ushort *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x24);
  *(uint *)(param_1 + 0x3bc) = (uint)*(ushort *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x2c);
  *(uint *)(param_1 + 0x3c4) = (uint)*(ushort *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x34);
  *(uint *)(param_1 + 0x3cc) = (uint)*(ushort *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3c);
  *(uint *)(param_1 + 0x3d4) = (uint)*(ushort *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x44);
  *(uint *)(param_1 + 0x3dc) = (uint)*(ushort *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x4c);
  *(uint *)(param_1 + 0x3e4) = (uint)*(ushort *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 0x54);
  *(uint *)(param_1 + 0x3ec) = (uint)*(ushort *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x5c);
  *(uint *)(param_1 + 0x3f4) = (uint)*(ushort *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 100);
  *(uint *)(param_1 + 0x3fc) = (uint)*(ushort *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x6c);
  *(uint *)(param_1 + 0x404) = (uint)*(ushort *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x74);
  *(uint *)(param_1 + 0x40c) = (uint)*(ushort *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x7c);
  FUN_0075efb0(auStack_80,plVar7,0,1);
  psVar8 = *(string **)PTR_DAT_02716d10;
  local_68 = operator_new(0x80);
  local_78 = 0x81;
  local_70 = 0x78;
  uVar5 = *(undefined8 *)(param_1 + 0x3ac);
  uVar4 = *(undefined8 *)(param_1 + 0x3a4);
  *local_68 = *(undefined8 *)(param_1 + 0x39c);
  local_68[1] = uVar4;
  local_68[2] = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x3b4);
  uVar5 = *(undefined8 *)(param_1 + 0x3bc);
  uVar6 = *(undefined8 *)(param_1 + 0x3cc);
  local_68[5] = *(undefined8 *)(param_1 + 0x3c4);
  local_68[6] = uVar6;
  local_68[3] = uVar4;
  local_68[4] = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x3d4);
  uVar5 = *(undefined8 *)(param_1 + 0x3dc);
  uVar6 = *(undefined8 *)(param_1 + 0x3ec);
  local_68[9] = *(undefined8 *)(param_1 + 0x3e4);
  local_68[10] = uVar6;
  local_68[7] = uVar4;
  local_68[8] = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x3f4);
  uVar5 = *(undefined8 *)(param_1 + 0x3fc);
  uVar6 = *(undefined8 *)(param_1 + 0x40c);
  local_68[0xd] = *(undefined8 *)(param_1 + 0x404);
  local_68[0xe] = uVar6;
  *(undefined1 *)(local_68 + 0xf) = 0;
  local_68[0xb] = uVar4;
  local_68[0xc] = uVar5;
  this = (string *)puVar2[3];
  if (this == psVar8) {
    FUN_009b58d0(puVar2 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_78);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  uVar1 = FUN_011bb900(*(undefined8 *)(param_1 + 0x68),puVar2);
  FUN_0075efb0(&local_78,plVar7,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar2,0x28,8);
  FUN_0075f0a0(&local_78);
  return uVar1 & 1;
}


