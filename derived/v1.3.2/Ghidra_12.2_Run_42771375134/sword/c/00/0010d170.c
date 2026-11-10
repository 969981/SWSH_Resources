/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0010d170; name: FUN_0010d170
 */


void FUN_0010d170(long *param_1,char *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long local_28;
  
  *param_1 = 0;
  if (*param_2 == '\0') {
    if (((*PTR_DAT_02710b58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02710b58), puVar4 = PTR_DAT_02710b60, iVar5 != 0)) {
      puVar1 = PTR_DAT_02710a18 + 0x10;
      *(undefined8 *)(PTR_DAT_02710b60 + 0x38) = 0;
      *(undefined4 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      *(undefined **)puVar4 = puVar1;
      *(undefined4 *)(puVar4 + 0x40) = 0;
      uVar2 = *(undefined4 *)PTR_DAT_02710860;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      lVar6 = nn::os::GetTlsValue(uVar2);
      puVar1 = PTR_DAT_02710b68;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
      }
      *(undefined4 *)(puVar4 + 0x50) = 0;
      *(undefined8 *)(puVar4 + 0x68) = 0;
      uVar7 = 0xcbf29ce484222645;
      *(undefined **)puVar4 = puVar1 + 0x10;
      *(undefined8 *)(puVar4 + 8) = uVar8;
      *(undefined **)(puVar4 + 0x48) = puVar1 + 0x48;
      pbVar9 = *(byte **)PTR_PTR_02710b70;
      *(undefined8 *)(puVar4 + 0x58) = 0xcbf29ce484222645;
      *(byte **)(puVar4 + 0x60) = pbVar9;
      bVar3 = *pbVar9;
      while (bVar3 != 0) {
        pbVar9 = pbVar9 + 1;
        uVar7 = (uVar7 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
      }
      *(ulong *)(puVar4 + 0x58) = uVar7;
      *(undefined8 *)(puVar4 + 0x68) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined **)(puVar4 + 0x10) = puVar4;
      __cxa_guard_release(PTR_DAT_02710b58);
    }
    puVar4 = PTR_DAT_02710b60;
    (**(code **)(*(long *)(PTR_DAT_02710b60 + 0x48) + 0x10))();
    lVar6 = *param_1;
    *param_1 = (long)puVar4;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      return;
    }
  }
  else {
    FUN_006cf520(&local_28,*(undefined8 *)PTR_DAT_02710440);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = local_28;
  }
  return;
}


