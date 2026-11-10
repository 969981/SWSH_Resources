/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005beb30; name: FUN_005beb30
 */


void FUN_005beb30(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_02713e20 + 0x10);
  FUN_005be880();
  param_1[0x18] = (long)(PTR_DAT_02713e08 + 0x10);
  plVar2 = param_1 + 0x1d;
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (lVar5 = *plVar2, lVar5 != 0)) {
    plVar6 = (long *)param_1[0x19];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x50))(plVar6,lVar5);
      (**(code **)(*plVar6 + 0x48))(plVar6,lVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  plVar6 = param_1 + 0x11;
  *plVar2 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0xc] = (long)(PTR_DAT_02713e30 + 0x10);
  if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (*plVar6 != 0)) {
    plVar2 = (long *)param_1[0xd];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar6 = 0;
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  *plVar6 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_02713e28 + 0x10;
  param_1[7] = (long)puVar1;
  if (param_1[0xb] != 0) {
    plVar2 = param_1 + 9;
    do {
      puVar3 = (undefined8 *)*plVar2;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar4 = (undefined8 *)puVar3[1];
      if (puVar4 == (undefined8 *)0x0) {
        *plVar2 = 0;
        param_1[10] = 0;
      }
      else {
        *puVar4 = 0;
        *plVar2 = (long)puVar4;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar5 = param_1[0xb];
      param_1[0xb] = lVar5 + -1;
    } while (lVar5 + -1 != 0);
  }
  param_1[2] = (long)puVar1;
  if (param_1[6] != 0) {
    plVar2 = param_1 + 4;
    do {
      puVar3 = (undefined8 *)*plVar2;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      puVar4 = (undefined8 *)puVar3[1];
      if (puVar4 == (undefined8 *)0x0) {
        *plVar2 = 0;
        param_1[5] = 0;
      }
      else {
        *puVar4 = 0;
        *plVar2 = (long)puVar4;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar5 = param_1[6];
      param_1[6] = lVar5 + -1;
    } while (lVar5 + -1 != 0);
  }
  return;
}


