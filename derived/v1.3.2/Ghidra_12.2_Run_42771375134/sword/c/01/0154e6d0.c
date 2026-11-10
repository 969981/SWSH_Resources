/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154e6d0; name: FUN_0154e6d0
 */


void FUN_0154e6d0(uint param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_58;
  undefined4 *local_50;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_02710798;
  local_50 = (undefined4 *)((ulong)local_50 & 0xffffffff00000000);
  lVar4 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_50);
  puVar1 = PTR_DAT_0272ad80 + (ulong)param_1 * 4;
  uVar5 = FUN_01503ae0(lVar4,puVar1);
  if (((uVar5 & 0xff) == 0) && (plVar6 = *(long **)(lVar4 + 0x58), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x50))(plVar6,puVar1);
  }
  *param_2 = (int)(uVar5 >> 0x20);
  local_44 = 0;
  lVar4 = FUN_0153bf80(*(undefined8 *)puVar2,&local_44);
  puVar1 = PTR_DAT_0272ad88 + (ulong)param_1 * 4;
  local_58 = 0x2304;
  local_50 = param_2 + 1;
  cVar3 = FUN_0154ece0(lVar4,puVar1,&local_50,&local_58);
  if ((cVar3 == '\0') && (plVar6 = *(long **)(lVar4 + 0x58), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x50))(plVar6,puVar1);
  }
  return;
}


