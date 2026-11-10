/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01086320; name: FUN_01086320
 */


void FUN_01086320(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_012b4da0(auStack_30,*(undefined8 *)(*(long *)(param_2 + 8) + 400),
               *(undefined8 *)(*(long *)(param_2 + 8) + 0x180));
  uVar1 = FUN_012b4090(auStack_30);
  if ((uVar1 & 1) != 0) {
    local_58 = 0xdabc0c9bea023569;
    local_50 = "cameraPosition";
    local_48 = 0xe;
    FUN_012b4250(auStack_40,auStack_30,&local_58);
    FUN_012b4190(&local_58,auStack_40,0);
    uVar2 = FUN_012b4630(0,&local_58);
    FUN_012b4190(auStack_68,auStack_40,1);
    uVar3 = FUN_012b4630(0,auStack_68);
    FUN_012b4190(auStack_78,auStack_40,2);
    uVar1 = FUN_012b4630(0,auStack_78);
    *(ulong *)(param_1 + 0xb8) = uVar1 & 0xffffffff;
    *(ulong *)(param_1 + 0xb0) = CONCAT44(uVar3,uVar2);
    local_58 = 0x82ef202fbe78dc1f;
    local_50 = "cameraTarget";
    local_48 = 0xc;
    FUN_012b4250(auStack_68,auStack_30,&local_58);
    FUN_012b4190(&local_58,auStack_68,0);
    uVar2 = FUN_012b4630(0,&local_58);
    FUN_012b4190(auStack_78,auStack_68,1);
    uVar3 = FUN_012b4630(0,auStack_78);
    FUN_012b4190(auStack_88,auStack_68,2);
    uVar1 = FUN_012b4630(0,auStack_88);
    *(ulong *)(param_1 + 200) = uVar1 & 0xffffffff;
    *(ulong *)(param_1 + 0xc0) = CONCAT44(uVar3,uVar2);
    local_58 = 0xaff222a30db0f305;
    local_50 = "modelPosition";
    local_48 = 0xd;
    FUN_012b4250(auStack_78,auStack_30,&local_58);
    FUN_012b4190(&local_58,auStack_78,0);
    uVar2 = FUN_012b4630(0,&local_58);
    FUN_012b4190(auStack_88,auStack_78,1);
    uVar3 = FUN_012b4630(0,auStack_88);
    FUN_012b4190(auStack_98,auStack_78,2);
    uVar1 = FUN_012b4630(0,auStack_98);
    *(ulong *)(param_1 + 0xd8) = uVar1 & 0xffffffff;
    *(ulong *)(param_1 + 0xd0) = CONCAT44(uVar3,uVar2);
    local_58 = 0x4ba6fbdaaef939;
    local_50 = "modelRotate";
    local_48 = 0xb;
    FUN_012b4250(auStack_88,auStack_30,&local_58);
    FUN_012b4190(&local_58,auStack_88,0);
    uVar2 = FUN_012b4630(0,&local_58);
    FUN_012b4190(auStack_98,auStack_88,1);
    uVar3 = FUN_012b4630(0,auStack_98);
    FUN_012b4190(auStack_a8,auStack_88,2);
    uVar4 = FUN_012b4630(0,auStack_a8);
    *(ulong *)(param_1 + 0xe8) = (ulong)uVar4;
    *(ulong *)(param_1 + 0xe0) = CONCAT44(uVar3,uVar2);
  }
  return;
}


