/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006762a0; name: FUN_006762a0
 */


void FUN_006762a0(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_1 = (long)(PTR_DAT_02714d98 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = param_3;
  param_1[4] = (long)param_2;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 == (long *)0x0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    param_1[4] = lVar4;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  FUN_006964c0(param_1 + 0xc,0);
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar1 = PTR_DAT_02714da0 + 0x10;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = (long)puVar1;
  param_1[0x19] = (long)param_2;
  param_1[0x1c] = 8;
  param_1[0x1d] = 0;
  if (param_2 == (long *)0x0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x19] = lVar4;
  }
  puVar1 = PTR_DAT_02714da8;
  param_1[0x24] = (long)param_2;
  param_1[0x25] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 8;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = (long)(puVar1 + 0x10);
  if (param_2 == (long *)0x0) {
    param_2 = (long *)FUN_005bc6f0();
    bVar3 = (ulong)param_1[0x26] < 8;
    param_1[0x24] = (long)param_2;
  }
  else {
    bVar3 = true;
  }
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  *(undefined2 *)((long)param_1 + 0x59) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (!bVar3) {
    return;
  }
  if (param_2 != (long *)0x0) {
    uVar7 = param_1[0x25];
    puVar5 = (undefined8 *)
             (**(code **)(*param_2 + 0x40))
                       (param_2,8,8,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
    if (7 < uVar7) {
      uVar7 = 8;
    }
    if (puVar5 != (undefined8 *)0x0) {
      plVar2 = param_1 + 0x28;
      if (((((uVar7 != 0) && (*puVar5 = *(undefined8 *)*plVar2, 1 < uVar7)) &&
           (puVar5[1] = *(undefined8 *)(*plVar2 + 8), uVar7 != 2)) &&
          ((puVar5[2] = *(undefined8 *)(*plVar2 + 0x10), 3 < uVar7 &&
           (puVar5[3] = *(undefined8 *)(*plVar2 + 0x18), uVar7 != 4)))) &&
         ((puVar5[4] = *(undefined8 *)(*plVar2 + 0x20), 5 < uVar7 &&
          ((puVar5[5] = *(undefined8 *)(*plVar2 + 0x28), uVar7 != 6 &&
           (puVar5[6] = *(undefined8 *)(*plVar2 + 0x30), 7 < uVar7)))))) {
        puVar5[7] = *(undefined8 *)(*plVar2 + 0x38);
      }
      if (((*(byte *)(param_1 + 0x2c) & 1) == 0) && (*plVar2 != 0)) {
        plVar6 = (long *)param_1[0x24];
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x48))
                    (plVar6,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar2 = 0;
      }
      param_1[0x2c] = 0;
      param_1[0x28] = (long)puVar5;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      param_1[0x25] = uVar7;
      param_1[0x26] = 8;
      if (uVar7 == 0) {
        param_1[0x29] = 0;
        param_1[0x2a] = 0;
        return;
      }
      param_1[0x29] = (long)puVar5;
      param_1[0x2a] = (long)(puVar5 + uVar7);
      return;
    }
  }
  param_1[0x25] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return;
}


