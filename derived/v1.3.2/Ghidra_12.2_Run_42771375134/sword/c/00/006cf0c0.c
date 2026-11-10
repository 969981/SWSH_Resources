/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cf0c0; name: FUN_006cf0c0
 */


void FUN_006cf0c0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_2;
  puVar1 = (undefined8 *)PTR_DAT_02710920;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x58);
  }
  puVar2 = (undefined8 *)PTR_PTR_02710928;
  if (lVar5 != 0) {
    puVar2 = (undefined8 *)(lVar5 + 0x60);
  }
  uVar3 = *puVar2;
  if (lVar5 == 0) {
    *param_1 = *puVar1;
    param_1[1] = uVar3;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x68);
    *param_1 = *puVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = 0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
  }
  param_1[3] = lVar5;
  return;
}


