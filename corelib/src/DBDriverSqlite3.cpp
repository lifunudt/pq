/*
Copyright (c) 2010-2014, Mathieu Labbe - IntRoLab - Universite de Sherbrooke
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Universite de Sherbrooke nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "DBDriverSqlite3.h"

#include "rtabmap/core/Signature.h"
#include "rtabmap/core/VisualWord.h"
#include "rtabmap/core/VWDictionary.h"
#include "rtabmap/core/util3d.h"
#include "rtabmap/core/Compression.h"
#include "DatabaseSchema_sql.h"
#include <set>

#include "rtabmap/utilite/UtiLite.h"

namespace rtabmap {

DBDriverSqlite3::DBDriverSqlite3(const ParametersMap & parameters) :
	DBDriver(parameters),
	_version("0.0.0"),
	_dbInMemory(Parameters::defaultDbSqlite3InMemory()),
	_cacheSize(Parameters::defaultDbSqlite3CacheSize()),
	_journalMode(Parameters::defaultDbSqlite3JournalMode()),
	_synchronous(Parameters::defaultDbSqlite3Synchronous()),
	_tempStore(Parameters::defaultDbSqlite3TempStore())
{
	ULOGGER_DEBUG("treadSafe=%d", sqlite3_threadsafe());
	this->parseParameters(parameters);
}

DBDriverSqlite3::~DBDriverSqlite3()
{
	this->closeConnection();
}

void DBDriverSqlite3::parseParameters(const ParametersMap & parameters)
{
	ParametersMap::const_iterator iter;
	if((iter=parameters.find(Parameters::kDbSqlite3CacheSize())) != parameters.end())
	{
		this->setCacheSize(std::atoi((*iter).second.c_str()));
	}
	if((iter=parameters.find(Parameters::kDbSqlite3JournalMode())) != parameters.end())
	{
		this->setJournalMode(std::atoi((*iter).second.c_str()));
	}
	if((iter=parameters.find(Parameters::kDbSqlite3Synchronous())) != parameters.end())
	{
		this->setSynchronous(std::atoi((*iter).second.c_str()));
	}
	if((iter=parameters.find(Parameters::kDbSqlite3TempStore())) != parameters.end())
	{
		this->setTempStore(std::atoi((*iter).second.c_str()));
	}
	if((iter=parameters.find(Parameters::kDbSqlite3InMemory())) != parameters.end())
	{
		this->setDbInMemory(uStr2Bool((*iter).second.c_str()));
	}
	DBDriver::parseParameters(parameters);
}

void DBDriverSqlite3::setCacheSize(unsigned int cacheSize)
{
	if(this->isConnected())
	{
	}
}

void DBDriverSqlite3::setJournalMode(int journalMode)
{

}

void DBDriverSqlite3::setSynchronous(int synchronous)
{

}

void DBDriverSqlite3::setTempStore(int tempStore)
{

}

void DBDriverSqlite3::setDbInMemory(bool dbInMemory)
{

}

/*
** This function is used to load the contents of a database file on disk
** into the "main" database of open database connection pInMemory, or
** to save the current contents of the database opened by pInMemory into
** a database file on disk. pInMemory is probably an in-memory database,
** but this function will also work fine if it is not.
**
** Parameter zFilename points to a nul-terminated string containing the
** name of the database file on disk to load from or save to. If parameter
** isSave is non-zero, then the contents of the file zFilename are
** overwritten with the contents of the database opened by pInMemory. If
** parameter isSave is zero, then the contents of the database opened by
** pInMemory are replaced by data loaded from the file zFilename.
**
** If the operation is successful, SQLITE_OK is returned. Otherwise, if
** an error occurs, an SQLite error code is returned.
*/
int DBDriverSqlite3::loadOrSaveDb(sqlite3 *pInMemory, const std::string & fileName, int isSave) const
{
  int rc;                   /* Function return code */
  
  return rc;
}

bool DBDriverSqlite3::getDatabaseVersionQuery(std::string & version) const
{

	return false;
}


bool DBDriverSqlite3::connectDatabaseQuery(const std::string & url, bool overwritten)
{
	
	return true;
}
void DBDriverSqlite3::disconnectDatabaseQuery(bool save)
{

}

bool DBDriverSqlite3::isConnectedQuery() const
{
    return true;
}

// In bytes
void DBDriverSqlite3::executeNoResultQuery(const std::string & sql) const
{

}

long DBDriverSqlite3::getMemoryUsedQuery() const
{
	return sqlite3_memory_used();

}

long DBDriverSqlite3::getImagesMemoryUsedQuery() const
{
	UDEBUG("");
	long size = 0L;
	return size;
}
long DBDriverSqlite3::getDepthImagesMemoryUsedQuery() const
{
	UDEBUG("");
	long size = 0L;
	
	return size;
}
long DBDriverSqlite3::getLaserScansMemoryUsedQuery() const
{
	UDEBUG("");
	long size = 0L;
	return size;
}
long DBDriverSqlite3::getUserDataMemoryUsedQuery() const
{
	UDEBUG("");
	long size = 0L;
	
	return size;
}
long DBDriverSqlite3::getWordsMemoryUsedQuery() const
{
	UDEBUG("");
	long size = 0L;
	
	return size;
}
int DBDriverSqlite3::getLastNodesSizeQuery() const
{
	UDEBUG("");
	int size = 0;
	
	return size;
}
int DBDriverSqlite3::getLastDictionarySizeQuery() const
{
	UDEBUG("");
	int size = 0;
	
	return size;
}
int DBDriverSqlite3::getTotalNodesSizeQuery() const
{
	UDEBUG("");
	int size = 0;
	
	return size;
}
int DBDriverSqlite3::getTotalDictionarySizeQuery() const
{
	UDEBUG("");
	int size = 0;
	
	return size;
}

void DBDriverSqlite3::loadNodeDataQuery(std::list<Signature *> & signatures) const
{
	UDEBUG("load data for %d signatures", (int)signatures.size());

}

bool DBDriverSqlite3::getCalibrationQuery(
		int signatureId,
		std::vector<CameraModel> & models,
		StereoCameraModel & stereoModel) const
{
	bool found = false;
	return found;
}

bool DBDriverSqlite3::getNodeInfoQuery(int signatureId,
		Transform & pose,
		int & mapId,
		int & weight,
		std::string & label,
		double & stamp,
		Transform & groundTruthPose) const
{
	bool found = false;
	
	return found;
}


void DBDriverSqlite3::getAllNodeIdsQuery(std::set<int> & ids, bool ignoreChildren, bool ignoreBadSignatures) const
{

}

void DBDriverSqlite3::getAllLinksQuery(std::multimap<int, Link> & links, bool ignoreNullLinks) const
{

}

void DBDriverSqlite3::getLastIdQuery(const std::string & tableName, int & id) const
{
	
}

void DBDriverSqlite3::getInvertedIndexNiQuery(int nodeId, int & ni) const
{

}

void DBDriverSqlite3::getNodeIdByLabelQuery(const std::string & label, int & id) const
{

}

void DBDriverSqlite3::getAllLabelsQuery(std::map<int, std::string> & labels) const
{

}

void DBDriverSqlite3::getWeightQuery(int nodeId, int & weight) const
{

}

//may be slower than the previous version but don't have a limit of words that can be loaded at the same time
void DBDriverSqlite3::loadSignaturesQuery(const std::list<int> & ids, std::list<Signature *> & nodes) const
{

}

void DBDriverSqlite3::loadLastNodesQuery(std::list<Signature *> & nodes) const
{

}

void DBDriverSqlite3::loadQuery(VWDictionary * dictionary) const
{

}

//may be slower than the previous version but don't have a limit of words that can be loaded at the same time
void DBDriverSqlite3::loadWordsQuery(const std::set<int> & wordIds, std::list<VisualWord *> & vws) const
{

}

void DBDriverSqlite3::loadLinksQuery(
		int signatureId,
		std::map<int, Link> & neighbors,
		Link::Type typeIn) const
{

}

void DBDriverSqlite3::loadLinksQuery(std::list<Signature *> & signatures) const
{
	
}


void DBDriverSqlite3::updateQuery(const std::list<Signature *> & nodes, bool updateTimestamp) const
{

}

void DBDriverSqlite3::updateQuery(const std::list<VisualWord *> & words, bool updateTimestamp) const
{

}

void DBDriverSqlite3::saveQuery(const std::list<Signature *> & signatures) const
{

}

void DBDriverSqlite3::saveQuery(const std::list<VisualWord *> & words) const
{
	
}

void DBDriverSqlite3::addLinkQuery(const Link & link) const
{

}

void DBDriverSqlite3::updateLinkQuery(const Link & link) const
{

}

std::string DBDriverSqlite3::queryStepNode() const
{
	return "INSERT INTO Node(id, map_id, weight, pose) VALUES(?,?,?,?);";
}
void DBDriverSqlite3::stepNode(sqlite3_stmt * ppStmt, const Signature * s) const
{

}

std::string DBDriverSqlite3::queryStepImage() const
{
	UASSERT(uStrNumCmp(_version, "0.10.0") < 0);
	return "INSERT INTO Image(id, data) VALUES(?,?);";
}
void DBDriverSqlite3::stepImage(sqlite3_stmt * ppStmt,
		int id,
		const cv::Mat & imageBytes) const
{

}

std::string DBDriverSqlite3::queryStepDepth() const
{
		return "INSERT INTO Depth(id, data, constant, local_transform, data2d) VALUES(?,?,?,?,?);";
}
void DBDriverSqlite3::stepDepth(sqlite3_stmt * ppStmt, const SensorData & sensorData) const
{

}

std::string DBDriverSqlite3::queryStepSensorData() const
{
		return "INSERT INTO Data(id, image, depth, calibration, scan_max_pts, scan) VALUES(?,?,?,?,?,?);";
}
void DBDriverSqlite3::stepSensorData(sqlite3_stmt * ppStmt,
		const SensorData & sensorData) const
{

}

std::string DBDriverSqlite3::queryStepLinkUpdate() const
{
		return "UPDATE Link SET type=?, transform=? WHERE from_id=? AND to_id = ?;";
}
std::string DBDriverSqlite3::queryStepLink() const
{
		return "INSERT INTO Link(type, transform, from_id, to_id) VALUES(?,?,?,?);";
}
void DBDriverSqlite3::stepLink(
		sqlite3_stmt * ppStmt,
		const Link & link) const
{

}

std::string DBDriverSqlite3::queryStepWordsChanged() const
{
	return "UPDATE Map_Node_Word SET word_id = ? WHERE word_id = ? AND node_id = ?;";
}
void DBDriverSqlite3::stepWordsChanged(sqlite3_stmt * ppStmt, int nodeId, int oldWordId, int newWordId) const
{
	
}

std::string DBDriverSqlite3::queryStepKeypoint() const
{
	return "INSERT INTO Map_Node_Word(node_id, word_id, pos_x, pos_y, size, dir, response, depth_x, depth_y, depth_z) VALUES(?,?,?,?,?,?,?,?,?,?);";
}
void DBDriverSqlite3::stepKeypoint(sqlite3_stmt * ppStmt,
		int nodeId,
		int wordId,
		const cv::KeyPoint & kp,
		const cv::Point3f & pt,
		const cv::Mat & descriptor) const
{

}

} // namespace rtabmap
