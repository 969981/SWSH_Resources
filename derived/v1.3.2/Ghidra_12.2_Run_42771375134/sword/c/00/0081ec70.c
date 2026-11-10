/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081ec70; name: FUN_0081ec70
 */


void FUN_0081ec70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                 ,0x71);
    uVar1 = FUN_00800f30(auStack_60,"Protocol Buffer map usage error:\n");
    uVar1 = FUN_00800f30(uVar1,"MapKey::type MapKey is not initialized. ");
    uVar1 = FUN_00800f30(uVar1,"Call set methods to initialize MapKey.");
    FUN_00800fa0(auStack_68,uVar1);
    FUN_00801290(auStack_60);
    iVar5 = *(int *)(param_2 + 1);
    iVar3 = *(int *)(param_1 + 1);
    if (iVar3 != iVar5) goto LAB_0081ed24;
LAB_0081eca0:
    switch(iVar5) {
    case 1:
    case 3:
switchD_0081ecbc_caseD_1:
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      break;
    case 2:
    case 4:
switchD_0081ecbc_caseD_2:
      *param_1 = *param_2;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
switchD_0081ecbc_caseD_5:
      FUN_00801270(auStack_60,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/map.h"
                   ,0xf2);
      uVar1 = FUN_00800f30(auStack_60,"Unsupported");
      FUN_00800fa0(auStack_68,uVar1);
      FUN_00801290(auStack_60);
      return;
    case 7:
switchD_0081ecbc_caseD_7:
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      return;
    case 9:
switchD_0081ecbc_caseD_9:
      std::string::operator=((string *)*param_1,(string *)*param_2);
    default:
      break;
    }
switchD_0081ecbc_default:
    return;
  }
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 == iVar5) goto LAB_0081eca0;
LAB_0081ed24:
  if ((iVar3 == 9) && (pbVar4 = (byte *)*param_1, pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + 0x10));
    }
    operator_delete(pbVar4);
  }
  *(int *)(param_1 + 1) = iVar5;
  switch(iVar5) {
  case 1:
  case 3:
    goto switchD_0081ecbc_caseD_1;
  case 2:
  case 4:
    goto switchD_0081ecbc_caseD_2;
  case 5:
  case 6:
  case 8:
  case 10:
    goto switchD_0081ecbc_caseD_5;
  case 7:
    goto switchD_0081ecbc_caseD_7;
  case 9:
    puVar2 = operator_new(0x18);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    *param_1 = puVar2;
    goto switchD_0081ecbc_caseD_9;
  default:
    goto switchD_0081ecbc_default;
  }
}


