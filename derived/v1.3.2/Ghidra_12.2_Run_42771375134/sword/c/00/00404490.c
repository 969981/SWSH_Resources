/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404490; name: FUN_00404490
 */


undefined8 FUN_00404490(uint param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = FUN_007749a0((long)(int)param_1 * 0x68);
  puVar3 = PTR_DAT_02712a40;
  *(long *)PTR_DAT_02712a40 = lVar5;
  if (lVar5 == 0) {
    uVar6 = 2;
  }
  else {
    if (0 < (int)param_1) {
      uVar7 = (ulong)param_1;
      lVar8 = 0;
      lVar2 = lVar5;
      while( true ) {
        uVar7 = uVar7 - 1;
        if (lVar2 != 0) {
          puVar1 = (undefined8 *)(lVar5 + lVar8);
          puVar1[3] = 0;
          puVar1[4] = 0;
          nn::os::InitializeMutex((MutexType *)(puVar1 + 6),true,0);
          puVar1[1] = 0;
          puVar1[2] = 0;
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 5) = 1;
          *(undefined4 *)(puVar1 + 0xc) = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
        }
        if (uVar7 == 0) break;
        lVar5 = *(long *)puVar3;
        lVar8 = lVar8 + 0x68;
        lVar2 = lVar5 + lVar8;
      }
    }
    puVar4 = PTR_DAT_02712a58;
    puVar3 = PTR_DAT_02712a50;
    *(uint *)PTR_DAT_02712a48 = param_1;
    uVar6 = 1;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)puVar4 = param_2;
    DAT_02737984 = 1;
  }
  return uVar6;
}


