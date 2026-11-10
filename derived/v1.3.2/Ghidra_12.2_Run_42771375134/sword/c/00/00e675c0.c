/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e675c0; name: FUN_00e675c0
 */


void FUN_00e675c0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_38;
  
  FUN_00e36b10();
  puVar4 = PTR_DAT_0271fd18;
  param_1[0xac] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0x250);
  param_1[10] = (long)(puVar4 + 0x290);
  lVar3 = *(long *)PTR_DAT_027152c0;
  param_1[0xb1] = *(long *)(PTR_DAT_027152c0 + 8);
  param_1[0xb0] = lVar3;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)((long)param_1 + 0x594) = 0;
  piVar5 = (int *)0x0;
  if ((4 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], piVar5 = (int *)0x0,
     uVar6 != 0)) {
    puVar1 = (uint *)((long)param_4 + uVar6);
    piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (0x1a - (long)*piVar5)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar7 = 0;
  uVar8 = 0;
  if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = *(undefined4 *)((long)piVar2 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  if ((0x18 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xc], uVar6 != 0)) {
    uVar7 = *(undefined4 *)((long)piVar5 + uVar6);
  }
  *(undefined4 *)((long)param_1 + 0x564) = uVar7;
  local_38 = 0x94fa893c690bf301;
  FUN_00dc07c0(param_1,&local_38,0xffffffff);
  local_38 = 0xb9dd6bd97cfbeb28;
  FUN_00dc07c0(param_1,&local_38,0xffffffff);
  local_38 = 0x34eec1b43f2f6305;
  FUN_00dc07c0(param_1,&local_38,0xffffffff);
  local_38 = 0xd73352b88c8b98c4;
  FUN_00dc07c0(param_1,&local_38,0xffffffff);
  local_38 = 0xb9dd6bd97cfbeb28;
  FUN_00dc0c70(param_1,&local_38,1);
  local_38 = 0xd73352b88c8b98c4;
  FUN_00dc0c70(param_1,&local_38,1);
  return;
}


