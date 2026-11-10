/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bdfc0; name: FUN_006bdfc0
 */


void FUN_006bdfc0(undefined4 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_44;
  
  puVar1 = *(undefined8 **)(param_2 + 0x68);
  uVar6 = *param_3;
  local_44 = param_1;
  if (puVar1 < *(undefined8 **)(param_2 + 0x70)) {
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar7 = *param_3;
    uVar3 = param_3[1];
    *param_3 = 0;
    uVar2 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(puVar1 + 4) = param_1;
    *puVar1 = uVar7;
    puVar1[1] = uVar3;
    puVar1[2] = uVar2;
    puVar1[3] = uVar4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 0x28;
  }
  else {
    FUN_006be4e0(param_2 + 0x60,param_3,&local_44);
  }
  FUN_006ac3d0(param_2,uVar6);
  if (*(long *)(param_2 + 0x90) == 0) {
    *(undefined8 *)(param_2 + 0x90) = uVar6;
  }
  return;
}


