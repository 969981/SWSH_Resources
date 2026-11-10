/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f71380; name: FUN_00f71380
 */


undefined8 FUN_00f71380(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong local_78;
  undefined4 local_70;
  ulong local_68;
  undefined4 local_60;
  ulong *local_58;
  ulong local_50;
  undefined1 auStack_48 [8];
  
  local_68 = local_68 & 0xffffffff00000000;
  local_50 = param_1;
  lVar3 = FUN_0175fb60(param_1,0xfff0b9d3,&local_68);
  if ((lVar3 == 0xccc2ccc1) && ((int)local_68 != 0)) {
    local_58 = &local_50;
    FUN_00f72730(&local_58);
    uVar9 = 0;
    do {
      uVar7 = uVar9 & 0x7fffffffffffffff;
      if (uVar7 == 2) {
        pbVar4 = (byte *)FUN_00f72fa0();
LAB_00f7141c:
        pbVar8 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          pbVar8 = pbVar4 + 1;
        }
        FUN_01760900(local_50,0xfff0b9d8,pbVar8);
      }
      else {
        if (uVar7 == 1) {
          pbVar4 = (byte *)FUN_00f72e60();
          goto LAB_00f7141c;
        }
        if (uVar7 == 0) {
          pbVar4 = (byte *)FUN_00f72d20();
          goto LAB_00f7141c;
        }
        pbVar8 = (byte *)FUN_00f730e0();
        pbVar4 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar4 = pbVar8 + 1;
        }
        FUN_01760900(local_50,0xfff0b9d8,pbVar4);
        FUN_01760f10(local_50,0xffffffff);
      }
      uVar1 = FUN_0175ef10(local_50);
      iVar2 = FUN_0175f320(local_50,uVar1);
      if (iVar2 != 0) {
        local_68 = local_50;
        local_60 = 2;
        local_78 = local_50;
        local_70 = 3;
        FUN_00f5e820(auStack_48,local_50,&local_68,&local_78,uVar1);
      }
      FUN_0175ef30(local_50,3);
      uVar9 = uVar9 + 1;
    } while (uVar9 != 4);
    FUN_0175ef30(local_50,0);
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_0175f320(param_1,0xfffffffe);
    if (iVar2 == 4) {
      pcVar6 = (char *)FUN_0175fd50(param_1,0xfffffffe,&local_68);
    }
    else {
      FUN_0175f320(param_1,0xfffffffe);
      pcVar6 = "(unknown)";
    }
    uVar5 = FUN_0175cc80(param_1,
                         "sol: attempt to index (set) nil value \"%s\" on userdata (bad (misspelled?) key name or does not exist)"
                         ,pcVar6);
  }
  return uVar5;
}


