/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006eeb50; name: FUN_006eeb50
 */


int * FUN_006eeb50(int *param_1,int *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined4 *)PTR_DAT_02710860;
  if (param_1 != param_2) {
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    if (iVar2 + 1 != 2) {
      do {
        param_1 = param_1 + 4;
        if (param_2 == param_1) {
          return param_2;
        }
        iVar2 = *param_1;
        *param_1 = iVar2 + 1;
      } while (iVar2 + 1 != 2);
    }
    puVar1 = *(undefined8 **)(param_3 + 0xb8);
    if (puVar1 == *(undefined8 **)(param_3 + 0xc0)) {
      FUN_006eed30(param_3 + 0xb0,param_1 + 2);
      puVar3 = (undefined4 *)PTR_DAT_02710860;
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + 200);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_006eed28:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = *(undefined8 *)(param_1 + 2);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(param_3 + 0xb8) = *(long *)(param_3 + 0xb8) + 8;
      puVar3 = (undefined4 *)PTR_DAT_02710860;
    }
  }
  PTR_DAT_02710860 = (undefined *)puVar3;
  if ((param_1 != param_2) && (piVar5 = param_1 + 4, piVar5 != param_2)) {
    do {
      while( true ) {
        iVar2 = *piVar5 + 1;
        *piVar5 = iVar2;
        if (iVar2 != 2) break;
        puVar1 = *(undefined8 **)(param_3 + 0xb8);
        if (puVar1 == *(undefined8 **)(param_3 + 0xc0)) {
          FUN_006eed30(param_3 + 0xb0,piVar5 + 2);
        }
        else {
          uVar6 = *(undefined8 *)(param_3 + 200);
          lVar4 = nn::os::GetTlsValue(*puVar3);
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_006eed28;
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *puVar1 = *(undefined8 *)(piVar5 + 2);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          *(long *)(param_3 + 0xb8) = *(long *)(param_3 + 0xb8) + 8;
        }
        piVar5 = piVar5 + 4;
        if (param_2 == piVar5) {
          return param_1;
        }
      }
      *param_1 = iVar2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar5 + 2);
      param_1 = param_1 + 4;
      piVar5 = piVar5 + 4;
    } while (param_2 != piVar5);
  }
  return param_1;
}


