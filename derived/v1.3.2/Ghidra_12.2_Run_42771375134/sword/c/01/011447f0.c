/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011447f0; name: FUN_011447f0
 */


void FUN_011447f0(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_68;
  long local_58;
  
  FUN_0077d660(*(undefined8 *)(param_1 + 0x160));
  *(undefined2 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined2 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18a) = 0;
  FUN_0077d660(*(undefined8 *)(param_1 + 400));
  *(undefined2 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined2 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined2 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  FUN_0077d660(*(undefined8 *)(param_1 + 0x1c0));
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined2 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1ea) = 0;
  FUN_0077d660(*(undefined8 *)(param_1 + 0x1f0));
  *(undefined2 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined2 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x21a) = 0;
  local_68 = *param_2;
  if (local_68 == 0) {
    FUN_01144580(param_1,&local_68);
    if (*param_2 == 0) goto LAB_01144958;
LAB_01144920:
    FUN_011303e0(&local_58);
    lVar9 = local_58;
    if (local_58 == 0) goto LAB_01144960;
    (**(code **)(*(long *)(local_58 + 0x50) + 0x18))();
  }
  else {
    plVar8 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_01144580(param_1,&local_68);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_68 = 0;
    if (*param_2 != 0) goto LAB_01144920;
LAB_01144958:
    lVar9 = 0;
  }
  local_58 = 0;
LAB_01144960:
  lVar7 = *(long *)(param_1 + 0x160);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined1 *)(param_1 + 0x188);
  uVar3 = *(undefined1 *)(param_1 + 0x189);
  uVar4 = *(undefined2 *)(param_1 + 0x168);
  local_58 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0x90,&local_58,uVar2,uVar3,uVar4,param_1 + 0x16c);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x18a);
  iVar6 = FUN_0077d480(*(undefined8 *)(param_1 + 0x90));
  if (iVar6 == 0) {
    bVar5 = true;
    lVar7 = *(long *)(param_1 + 400);
  }
  else {
    bVar5 = *(char *)(param_1 + 0xb8) != '\0';
    lVar7 = *(long *)(param_1 + 400);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined1 *)(param_1 + 0x1b8);
  uVar3 = *(undefined1 *)(param_1 + 0x1b9);
  uVar4 = *(undefined2 *)(param_1 + 0x198);
  local_58 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0xc0,&local_58,uVar2,uVar3,uVar4,param_1 + 0x19c);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_1 + 0x1ba);
  iVar6 = FUN_0077d480(*(undefined8 *)(param_1 + 0xc0));
  if (iVar6 != 0) {
    bVar5 = (bool)(bVar5 & *(char *)(param_1 + 0xe8) != '\0');
  }
  lVar7 = *(long *)(param_1 + 0x1c0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined1 *)(param_1 + 0x1e8);
  uVar3 = *(undefined1 *)(param_1 + 0x1e9);
  uVar4 = *(undefined2 *)(param_1 + 0x1c8);
  local_58 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0xf0,&local_58,uVar2,uVar3,uVar4,param_1 + 0x1cc);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_1 + 0x1ea);
  iVar6 = FUN_0077d480(*(undefined8 *)(param_1 + 0xf0));
  if (iVar6 != 0) {
    bVar5 = (bool)(bVar5 & *(char *)(param_1 + 0x118) != '\0');
  }
  lVar7 = *(long *)(param_1 + 0x1f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined1 *)(param_1 + 0x218);
  uVar3 = *(undefined1 *)(param_1 + 0x219);
  uVar4 = *(undefined2 *)(param_1 + 0x1f8);
  local_58 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0x120,&local_58,uVar2,uVar3,uVar4,param_1 + 0x1fc);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_1 + 0x21a);
  iVar6 = FUN_0077d480(*(undefined8 *)(param_1 + 0x120));
  if (iVar6 != 0) {
    bVar5 = (bool)(bVar5 & *(char *)(param_1 + 0x148) != '\0');
  }
  uVar1 = *(uint *)(lVar9 + 0x428);
  if (((uint)*(ushort *)(param_1 + 0x150) != (uVar1 / 0x3c & 0xffff)) ||
     ((uint)*(ushort *)(param_1 + 0x152) != uVar1 % 0x3c)) {
    *(short *)(param_1 + 0x150) = (short)((ulong)uVar1 / 0x3c);
    *(short *)(param_1 + 0x152) = (short)(uVar1 % 0x3c);
  }
  *(bool *)(param_1 + 0x158) = bVar5;
  return;
}


