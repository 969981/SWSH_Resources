/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01150590; name: FUN_01150590
 */


void FUN_01150590(long param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_218 [104];
  undefined *local_1b0 [2];
  undefined1 auStack_1a0 [184];
  undefined1 auStack_e8 [184];
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 0xf08);
  if (lVar6 == 0) {
    return;
  }
  plVar5 = (long *)(lVar6 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar3 = *(long *)(param_1 + 0xd8);
  if (*(char *)(lVar3 + 0xda8) != '\0') {
    bVar1 = *(int *)(lVar3 + 0xdb0) != 2;
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)*(uint *)(lVar3 + 0xdb4) << 0x20;
    }
    FUN_010491d0(auStack_e8,lVar3 + 0xa0,!bVar1 | uVar4,0);
    cVar2 = FUN_009ff0e0(lVar6);
    if (*(char *)(*(long *)(param_1 + 0xd8) + 0x60) == '\0') {
      if (cVar2 == '\0') {
        FUN_010348f0(local_1b0,*(undefined8 *)(param_1 + 8));
        memcpy(auStack_1a0,auStack_e8,0xb8);
        local_1b0[0] = PTR_DAT_02724ce0;
      }
      else {
        if (cVar2 != '\x01') goto LAB_0115071c;
        FUN_010348f0(local_1b0,*(undefined8 *)(param_1 + 8));
        memcpy(auStack_1a0,auStack_e8,0xb8);
        local_1b0[0] = PTR_DAT_02724cd0;
      }
    }
    else if (cVar2 == '\0') {
      FUN_010348f0(local_1b0,*(undefined8 *)(param_1 + 8));
      memcpy(auStack_1a0,auStack_e8,0xb8);
      local_1b0[0] = PTR_DAT_02724cd8;
    }
    else {
      if (cVar2 != '\x01') goto LAB_0115071c;
      FUN_010348f0(local_1b0,*(undefined8 *)(param_1 + 8));
      memcpy(auStack_1a0,auStack_e8,0xb8);
      local_1b0[0] = PTR_DAT_02724cc8;
    }
    local_1b0[0] = local_1b0[0] + 0x10;
    FUN_01034150(auStack_218,local_1b0);
    FUN_01034430(auStack_218);
    FUN_01031e00(auStack_218);
  }
LAB_0115071c:
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


