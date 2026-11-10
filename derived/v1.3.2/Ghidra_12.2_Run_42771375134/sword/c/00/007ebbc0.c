/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ebbc0; name: FUN_007ebbc0
 */


void FUN_007ebbc0(undefined8 param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  string *psVar1;
  ulong uVar2;
  string sVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte local_80 [16];
  void *local_70;
  ulong local_68;
  ulong local_60;
  void *local_58;
  
  sVar3 = *param_2;
  uVar6 = (ulong)(byte)sVar3;
  uVar7 = *(ulong *)(param_2 + 8);
  bVar4 = ((byte)sVar3 & 1) == 0;
  uVar9 = (ulong)((byte)sVar3 >> 1);
  if (!bVar4) {
    uVar9 = uVar7;
  }
  if (uVar9 == 0) {
    FUN_007eac10(param_1,param_3,param_4,0,"Missing name.");
    return;
  }
  uVar9 = 0;
  do {
    psVar1 = param_2 + 1;
    if (!bVar4) {
      psVar1 = *(string **)(param_2 + 0x10);
    }
    sVar3 = psVar1[uVar9];
    if ((byte)sVar3 < 0x61) {
      uVar8 = (uint)(byte)sVar3;
      if ((byte)sVar3 < 0x41) {
        if (9 < uVar8 - 0x30) {
LAB_007ebc6c:
          std::operator+("\"",param_2);
          puVar5 = (ulong *)std::string::append((char *)local_80);
          local_68 = *puVar5;
          local_60 = puVar5[1];
          local_58 = (void *)puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          FUN_007eaaf0(param_1,param_3,param_4,0,&local_68);
          if ((local_68 & 1) != 0) {
            operator_delete(local_58);
          }
          if ((local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
          uVar6 = (ulong)(byte)*param_2;
          uVar7 = *(ulong *)(param_2 + 8);
        }
      }
      else if ((0x5a < uVar8) && (uVar8 != 0x5f)) goto LAB_007ebc6c;
    }
    else if (0x7a < (byte)sVar3) goto LAB_007ebc6c;
    bVar4 = (uVar6 & 1) == 0;
    uVar9 = uVar9 + 1;
    uVar2 = uVar6 >> 1;
    if (!bVar4) {
      uVar2 = uVar7;
    }
    if (uVar2 <= uVar9) {
      return;
    }
  } while( true );
}


